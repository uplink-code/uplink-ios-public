//
//  SessionService.swift
//  Connect
//
//  Created by Erik Sargent on 10/14/25.
//

import Foundation

struct SessionDetailsResponse: Codable {
    let sessionUrl: String
    let sessionId: String?
    let project: Project?
    let organization: Organization
    let iat: Int?
    let exp: Int?
}


struct Project: Codable {
    let id: String
    let name: String
    let description: String?
}


struct Organization: Codable {
    let id: String
    let name: String
    let avatarUrl: String?

    enum CodingKeys: String, CodingKey {
        case id, name
        case avatarUrl = "avatar_url"
    }
}


struct LinkSessionResponse: Codable {
    let sessionUrl: String
}


struct ValidateOtpCodeResponse: Codable {
    let sessionToken: String
}


enum SessionService {
    static func getSessionDetails(jwtToken: String) async throws -> SessionDetailsResponse {
        try await API.get(path: "sessions/details", headers: ["Authorization": "Bearer \(jwtToken)"])
    }

    struct ValidateOtpRequest: Codable {
        var otpCode: String
    }

    static func validateOtpCode(code: String) async throws -> ValidateOtpCodeResponse {
        try await API.post(path: "sessions/validate-otp-code", body: ValidateOtpRequest(otpCode: code))
    }
}
