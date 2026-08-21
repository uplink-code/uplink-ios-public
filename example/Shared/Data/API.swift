//
//  API.swift
//  Connect
//
//  Created by Erik Sargent on 10/14/25.
//

import Foundation

enum API {
    enum APIError: Error, Sendable {
        case invalidUrl
        case httpError(statusCode: Int?, responseBody: (any Sendable)?, error: (any Error)?)
        case decodeError(error: (any Error)?, responseBody: (any Sendable)?)
    }

    private static func prepRequest(path: String, headers: [String: String] = [:]) throws -> URLRequest {
        guard let url = URL(string: "https://api.uplink.build/\(path)") else {
            throw APIError.invalidUrl
        }

        var request = URLRequest(url: url)
        for (key, value) in headers {
            request.setValue(value, forHTTPHeaderField: key)
        }

        request.setValue("application/json; charset=utf-8", forHTTPHeaderField: "Content-Type")

        return request
    }

    private static func performRequest<Response: Codable>(_ request: URLRequest) async throws -> Response {
        do {
            let (data, response) = try await URLSession.shared.data(for: request)
            if let httpResponse = response as? HTTPURLResponse, (200...299).contains(httpResponse.statusCode) {
                do {
                    let decodedResponse = try JSONDecoder().decode(Response.self, from: data)
                    return decodedResponse
                }
                catch let decodeError {
                    let responseBody = (try? JSONSerialization.jsonObject(with: data, options: [.fragmentsAllowed])) as? [String: any Sendable]
                    let willThrow = APIError.decodeError(error: decodeError, responseBody: responseBody)
                    print(willThrow)
                    throw willThrow
                }
            }
            else {
                let statusCode = (response as? HTTPURLResponse)?.statusCode
                let responseBody = try? JSONSerialization.jsonObject(with: data, options: [.fragmentsAllowed]) as? [String: any Sendable]
                let willThrow = APIError.httpError(statusCode: statusCode, responseBody: responseBody, error: nil)
                print(willThrow)
                throw willThrow
            }
        }
        catch let error {
            let willThrow = APIError.httpError(statusCode: nil, responseBody: nil, error: error)
            print(willThrow)
            throw willThrow
        }
    }

    static func post<Input: Codable, Response: Codable>(path: String, body: Input, headers: [String: String] = [:]) async throws -> Response {
        var request = try self.prepRequest(path: path, headers: headers)
        request.httpMethod = "POST"
        request.httpBody = try JSONEncoder().encode(body)
        print(request)

        return try await performRequest(request)
    }

    static func get<Response: Codable>(path: String, headers: [String: String] = [:]) async throws -> Response {
        let request = try self.prepRequest(path: path, headers: headers)
        print(request)

        return try await performRequest(request)
    }
}
