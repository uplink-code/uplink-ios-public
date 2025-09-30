#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UIOSAddress, UIOSAddressAddressType, UIOSAddressAddressTypeFactory, UIOSAddressCompanion, UIOSBrowserEvent, UIOSBrowserEventClosed, UIOSBrowserEventCreated, UIOSClickOptions, UIOSCoreEmitterEvent<T>, UIOSCoreResponse, UIOSDeviceInfo, UIOSDeviceInfoCompanion, UIOSInputOptions, UIOSKotlinArray<T>, UIOSKotlinByteArray, UIOSKotlinByteIterator, UIOSKotlinCancellationException, UIOSKotlinEnum<E>, UIOSKotlinEnumCompanion, UIOSKotlinException, UIOSKotlinIllegalStateException, UIOSKotlinNothing, UIOSKotlinRuntimeException, UIOSKotlinThrowable, UIOSKotlinUnit, UIOSKotlinx_serialization_coreSerialKind, UIOSKotlinx_serialization_coreSerializersModule, UIOSKotlinx_serialization_jsonJsonElement, UIOSKotlinx_serialization_jsonJsonElementCompanion, UIOSKtor_httpCookie, UIOSKtor_httpCookieCompanion, UIOSKtor_httpCookieEncoding, UIOSKtor_utilsGMTDate, UIOSKtor_utilsGMTDateCompanion, UIOSKtor_utilsMonth, UIOSKtor_utilsMonthCompanion, UIOSKtor_utilsWeekDay, UIOSKtor_utilsWeekDayCompanion, UIOSPageEvent, UIOSPageEventClosed, UIOSPageEventCreated, UIOSPageEventRaw, UIOSPageEventRequest, UIOSPageEventResponse, UIOSWaitForOptions, UIOSWorker, UIOSWorkerEvent, UIOSWorkerEventClosed, UIOSWorkerEventConnected, UIOSWorkerEventTerminated, UIViewController;

@protocol BrowserFactoryProtocol, BrowserProtocol, EmitterProtocol, MuppetProtocol, PageFactoryBaseProtocol, PageProtocol, UIOSKotlinAnnotation, UIOSKotlinAutoCloseable, UIOSKotlinComparable, UIOSKotlinCoroutineContext, UIOSKotlinCoroutineContextElement, UIOSKotlinCoroutineContextKey, UIOSKotlinFunction, UIOSKotlinIterator, UIOSKotlinKAnnotatedElement, UIOSKotlinKClass, UIOSKotlinKClassifier, UIOSKotlinKDeclarationContainer, UIOSKotlinSequence, UIOSKotlinSuspendFunction1, UIOSKotlinx_coroutines_coreChildHandle, UIOSKotlinx_coroutines_coreChildJob, UIOSKotlinx_coroutines_coreDeferred, UIOSKotlinx_coroutines_coreDisposableHandle, UIOSKotlinx_coroutines_coreFlow, UIOSKotlinx_coroutines_coreFlowCollector, UIOSKotlinx_coroutines_coreJob, UIOSKotlinx_coroutines_coreParentJob, UIOSKotlinx_coroutines_coreSelectClause, UIOSKotlinx_coroutines_coreSelectClause0, UIOSKotlinx_coroutines_coreSelectClause1, UIOSKotlinx_coroutines_coreSelectInstance, UIOSKotlinx_coroutines_coreSharedFlow, UIOSKotlinx_serialization_coreCompositeDecoder, UIOSKotlinx_serialization_coreCompositeEncoder, UIOSKotlinx_serialization_coreDecoder, UIOSKotlinx_serialization_coreDeserializationStrategy, UIOSKotlinx_serialization_coreEncoder, UIOSKotlinx_serialization_coreKSerializer, UIOSKotlinx_serialization_coreSerialDescriptor, UIOSKotlinx_serialization_coreSerializationStrategy, UIOSKotlinx_serialization_coreSerializersModuleCollector, UIOSKtor_ioCloseable, UIOSKtor_ioJvmSerializable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface UIOSBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface UIOSBase (UIOSBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface UIOSMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface UIOSMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorUIOSKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface UIOSNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface UIOSByte : UIOSNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface UIOSUByte : UIOSNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface UIOSShort : UIOSNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface UIOSUShort : UIOSNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface UIOSInt : UIOSNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface UIOSUInt : UIOSNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface UIOSLong : UIOSNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface UIOSULong : UIOSNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface UIOSFloat : UIOSNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface UIOSDouble : UIOSNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface UIOSBoolean : UIOSNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceInfo")))
@interface UIOSDeviceInfo : UIOSBase
- (instancetype)initWithDeviceModel:(NSString *)deviceModel platform:(NSString *)platform platformVersion:(NSString *)platformVersion deviceType:(NSString *)deviceType __attribute__((swift_name("init(deviceModel:platform:platformVersion:deviceType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UIOSDeviceInfoCompanion *companion __attribute__((swift_name("companion")));
- (UIOSDeviceInfo *)doCopyDeviceModel:(NSString *)deviceModel platform:(NSString *)platform platformVersion:(NSString *)platformVersion deviceType:(NSString *)deviceType __attribute__((swift_name("doCopy(deviceModel:platform:platformVersion:deviceType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, NSString *> *)toHeaders __attribute__((swift_name("toHeaders()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));
@property (readonly) NSString *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) NSString *platformVersion __attribute__((swift_name("platformVersion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceInfo.Companion")))
@interface UIOSDeviceInfoCompanion : UIOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UIOSDeviceInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<UIOSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Uplink")))
@interface UIOSUplink : UIOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Get a session url for clients and workers to join
 *
 * @param key Uplink API key
 * @return URL string a client or worker can connect() to
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sessionKey:(NSString *)key completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("session(key:completionHandler:)")));

/**
 * Get a session url for clients and workers to join
 *
 * @param key Uplink API key
 * @param host Uplink host
 * @return URL string a client or worker can connect() to
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sessionWithHostKey:(NSString *)key host:(NSString *)host completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sessionWithHost(key:host:completionHandler:)")));

/**
 * Create an Uplink Worker to accept commands from a client
 *
 * @param controller UIViewController hosting the WKWebViews
 * @return Worker
 */
- (UIOSWorker *)workerController:(UIViewController *)controller __attribute__((swift_name("worker(controller:)")));

/**
 * Create an Uplink Worker to accept commands from a client
 *
 * @param controller UIViewController hosting the WKWebViews
 * @param factory BrowserFactoryProtocol controlling how new browsers are created
 * @return Worker
 */
- (UIOSWorker *)workerWithFactoryController:(UIViewController *)controller factory:(id<BrowserFactoryProtocol>)factory __attribute__((swift_name("workerWithFactory(controller:factory:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol UIOSKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address")))
@interface UIOSAddress : UIOSBase <UIOSKotlinComparable>
- (instancetype)initWithAddress:(uint32_t)address __attribute__((swift_name("init(address:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UIOSAddressCompanion *companion __attribute__((swift_name("companion")));
- (uint32_t)broadcast __attribute__((swift_name("broadcast()")));
- (int32_t)compareToOther:(UIOSAddress *)other __attribute__((swift_name("compareTo(other:)")));
- (UIOSAddress *)doCopyAddress:(uint32_t)address __attribute__((swift_name("doCopy(address:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isBroadcast __attribute__((swift_name("isBroadcast()")));
- (BOOL)matchOther:(UIOSAddress *)other allowBroadcast:(BOOL)allowBroadcast __attribute__((swift_name("match(other:allowBroadcast:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (UIOSAddressAddressType * _Nullable)type __attribute__((swift_name("type()")));
@property (readonly) uint32_t address __attribute__((swift_name("address")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address.Companion")))
@interface UIOSAddressCompanion : UIOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UIOSAddressCompanion *shared __attribute__((swift_name("shared")));
- (UIOSAddress *)fromN:(uint32_t)n __attribute__((swift_name("from(n:)")));
- (UIOSAddress *)generateType:(UIOSAddressAddressType *)type __attribute__((swift_name("generate(type:)")));
- (BOOL)isBroadcastN:(uint32_t)n __attribute__((swift_name("isBroadcast(n:)")));
@property (readonly) UIOSAddress *BROADCAST __attribute__((swift_name("BROADCAST")));
@property (readonly) UIOSAddress *CLIENT_BROADCAST __attribute__((swift_name("CLIENT_BROADCAST")));
@property (readonly) UIOSAddress *RELAY_BROADCAST __attribute__((swift_name("RELAY_BROADCAST")));
@property (readonly) UIOSAddress *SERVICE_BROADCAST __attribute__((swift_name("SERVICE_BROADCAST")));
@property (readonly) UIOSAddress *WORKER_BROADCAST __attribute__((swift_name("WORKER_BROADCAST")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface UIOSKotlinEnum<E> : UIOSBase <UIOSKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UIOSKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address.AddressType")))
@interface UIOSAddressAddressType : UIOSKotlinEnum<UIOSAddressAddressType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UIOSAddressAddressTypeFactory *companion __attribute__((swift_name("companion")));
@property (class, readonly) UIOSAddressAddressType *relay __attribute__((swift_name("relay")));
@property (class, readonly) UIOSAddressAddressType *client __attribute__((swift_name("client")));
@property (class, readonly) UIOSAddressAddressType *worker __attribute__((swift_name("worker")));
@property (class, readonly) UIOSAddressAddressType *service __attribute__((swift_name("service")));
@property (class, readonly) UIOSAddressAddressType *all __attribute__((swift_name("all")));
+ (UIOSKotlinArray<UIOSAddressAddressType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<UIOSAddressAddressType *> *entries __attribute__((swift_name("entries")));
@property (readonly) uint32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address.AddressTypeFactory")))
@interface UIOSAddressAddressTypeFactory : UIOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)factory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UIOSAddressAddressTypeFactory *shared __attribute__((swift_name("shared")));
- (UIOSAddressAddressType * _Nullable)fromValueValue:(uint32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((swift_name("TransportProtocol")))
@protocol UIOSTransportProtocol
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)closeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("close(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("connect(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(id _Nullable)element completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
@property (readonly) uint32_t MAX_CHUNK_SIZE __attribute__((swift_name("MAX_CHUNK_SIZE")));
@end

__attribute__((swift_name("WorkerEvent")))
@interface UIOSWorkerEvent : UIOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkerEvent.Closed")))
@interface UIOSWorkerEventClosed : UIOSWorkerEvent
- (instancetype)initWithAddress:(UIOSAddress *)address __attribute__((swift_name("init(address:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (UIOSWorkerEventClosed *)doCopyAddress:(UIOSAddress *)address __attribute__((swift_name("doCopy(address:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UIOSAddress *address __attribute__((swift_name("address")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkerEvent.Connected")))
@interface UIOSWorkerEventConnected : UIOSWorkerEvent
- (instancetype)initWithAddress:(UIOSAddress *)address __attribute__((swift_name("init(address:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (UIOSWorkerEventConnected *)doCopyAddress:(UIOSAddress *)address __attribute__((swift_name("doCopy(address:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UIOSAddress *address __attribute__((swift_name("address")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkerEvent.Terminated")))
@interface UIOSWorkerEventTerminated : UIOSWorkerEvent
- (instancetype)initWithAddress:(UIOSAddress *)address __attribute__((swift_name("init(address:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (UIOSWorkerEventTerminated *)doCopyAddress:(UIOSAddress *)address __attribute__((swift_name("doCopy(address:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UIOSAddress *address __attribute__((swift_name("address")));
@end

__attribute__((swift_name("Worker")))
@interface UIOSWorker : UIOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Start accepting commands. Blocks until close() completes or worker is terminated
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)acceptWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("accept(completionHandler:)")));

/** Closes the worker.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)closeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("close(completionHandler:)")));

/**
 * Connect the worker to the session url
 *
 * @param session Session URL
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectSession:(NSString *)session completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("connect(session:completionHandler:)")));

/**
 * Get device information including model, platform, and version
 *
 * @return DeviceInfo containing device-specific details
 */
- (UIOSDeviceInfo *)info __attribute__((swift_name("info()")));

/**
 * Callback to watch WorkerEvents
 *
 * @param block callback function that receives the events
 */
- (id<UIOSKtor_ioCloseable>)watchBlock:(void (^)(UIOSWorkerEvent *))block __attribute__((swift_name("watch(block:)")));
@property (readonly) UIOSAddress *address __attribute__((swift_name("address")));
@property (readonly) id<UIOSKotlinx_coroutines_coreSharedFlow> events __attribute__((swift_name("events")));
@end

__attribute__((swift_name("BrowserEvent")))
@interface UIOSBrowserEvent : UIOSWorkerEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrowserEvent.Closed")))
@interface UIOSBrowserEventClosed : UIOSBrowserEvent
- (instancetype)initWithHandle:(NSString *)handle __attribute__((swift_name("init(handle:)"))) __attribute__((objc_designated_initializer));
- (UIOSBrowserEventClosed *)doCopyHandle:(NSString *)handle __attribute__((swift_name("doCopy(handle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *handle __attribute__((swift_name("handle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrowserEvent.Created")))
@interface UIOSBrowserEventCreated : UIOSBrowserEvent
- (instancetype)initWithHandle:(NSString *)handle __attribute__((swift_name("init(handle:)"))) __attribute__((objc_designated_initializer));
- (UIOSBrowserEventCreated *)doCopyHandle:(NSString *)handle __attribute__((swift_name("doCopy(handle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *handle __attribute__((swift_name("handle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClickOptions")))
@interface UIOSClickOptions : UIOSBase
- (instancetype)initWithSimulateFramework:(BOOL)simulateFramework __attribute__((swift_name("init(simulateFramework:)"))) __attribute__((objc_designated_initializer));
- (UIOSClickOptions *)doCopySimulateFramework:(BOOL)simulateFramework __attribute__((swift_name("doCopy(simulateFramework:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL simulateFramework __attribute__((swift_name("simulateFramework")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputOptions")))
@interface UIOSInputOptions : UIOSBase
- (instancetype)initWithSimulateFramework:(BOOL)simulateFramework simulateTyping:(BOOL)simulateTyping triggerEvents:(BOOL)triggerEvents __attribute__((swift_name("init(simulateFramework:simulateTyping:triggerEvents:)"))) __attribute__((objc_designated_initializer));
- (UIOSInputOptions *)doCopySimulateFramework:(BOOL)simulateFramework simulateTyping:(BOOL)simulateTyping triggerEvents:(BOOL)triggerEvents __attribute__((swift_name("doCopy(simulateFramework:simulateTyping:triggerEvents:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL simulateFramework __attribute__((swift_name("simulateFramework")));
@property (readonly) BOOL simulateTyping __attribute__((swift_name("simulateTyping")));
@property (readonly) BOOL triggerEvents __attribute__((swift_name("triggerEvents")));
@end

__attribute__((swift_name("PageEvent")))
@interface UIOSPageEvent : UIOSWorkerEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageEvent.Closed")))
@interface UIOSPageEventClosed : UIOSPageEvent
- (instancetype)initWithHandle:(NSString *)handle __attribute__((swift_name("init(handle:)"))) __attribute__((objc_designated_initializer));
- (UIOSPageEventClosed *)doCopyHandle:(NSString *)handle __attribute__((swift_name("doCopy(handle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *handle __attribute__((swift_name("handle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageEvent.Created")))
@interface UIOSPageEventCreated : UIOSPageEvent
- (instancetype)initWithHandle:(NSString *)handle __attribute__((swift_name("init(handle:)"))) __attribute__((objc_designated_initializer));
- (UIOSPageEventCreated *)doCopyHandle:(NSString *)handle __attribute__((swift_name("doCopy(handle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *handle __attribute__((swift_name("handle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageEvent.Raw")))
@interface UIOSPageEventRaw : UIOSPageEvent
- (instancetype)initWithEvent:(UIOSCoreEmitterEvent<id> *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer));
- (UIOSPageEventRaw *)doCopyEvent:(UIOSCoreEmitterEvent<id> *)event __attribute__((swift_name("doCopy(event:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UIOSCoreEmitterEvent<id> *event __attribute__((swift_name("event")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageEvent.Request")))
@interface UIOSPageEventRequest : UIOSPageEvent
- (instancetype)initWithUrl:(NSString *)url method:(NSString *)method headers:(NSDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("init(url:method:headers:)"))) __attribute__((objc_designated_initializer));
- (UIOSPageEventRequest *)doCopyUrl:(NSString *)url method:(NSString *)method headers:(NSDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("doCopy(url:method:headers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@property (readonly) NSString *method __attribute__((swift_name("method")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageEvent.Response")))
@interface UIOSPageEventResponse : UIOSPageEvent
- (instancetype)initWithUrl:(NSString *)url status:(int32_t)status headers:(NSDictionary<NSString *, NSArray<NSString *> *> *)headers __attribute__((swift_name("init(url:status:headers:)"))) __attribute__((objc_designated_initializer));
- (UIOSPageEventResponse *)doCopyUrl:(NSString *)url status:(int32_t)status headers:(NSDictionary<NSString *, NSArray<NSString *> *> *)headers __attribute__((swift_name("doCopy(url:status:headers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *headers __attribute__((swift_name("headers")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitForOptions")))
@interface UIOSWaitForOptions : UIOSBase
- (instancetype)initWithTimes:(int32_t)times interval:(int64_t)interval __attribute__((swift_name("init(times:interval:)"))) __attribute__((objc_designated_initializer));
- (UIOSWaitForOptions *)doCopyTimes:(int32_t)times interval:(int64_t)interval __attribute__((swift_name("doCopy(times:interval:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t interval __attribute__((swift_name("interval")));
@property (readonly) int32_t times __attribute__((swift_name("times")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol UIOSKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<UIOSKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<UIOSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol UIOSKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<UIOSKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<UIOSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol UIOSKotlinx_serialization_coreKSerializer <UIOSKotlinx_serialization_coreSerializationStrategy, UIOSKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinThrowable")))
@interface UIOSKotlinThrowable : UIOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UIOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UIOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (UIOSKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UIOSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface UIOSKotlinException : UIOSKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UIOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UIOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface UIOSKotlinRuntimeException : UIOSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UIOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UIOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface UIOSKotlinIllegalStateException : UIOSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UIOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UIOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface UIOSKotlinCancellationException : UIOSKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UIOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UIOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

@protocol BrowserFactoryProtocol
@required
- (id<BrowserProtocol>)createMuppet:(id<MuppetProtocol>)muppet __attribute__((swift_name("create(muppet:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface UIOSKotlinEnumCompanion : UIOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UIOSKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface UIOSKotlinArray<T> : UIOSBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(UIOSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<UIOSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol UIOSKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol UIOSKtor_ioCloseable <UIOSKotlinAutoCloseable>
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol UIOSKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<UIOSKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol UIOSKotlinx_coroutines_coreSharedFlow <UIOSKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmitterEvent")))
@interface UIOSCoreEmitterEvent<T> : UIOSBase
- (instancetype)initWithType:(NSString *)type data:(T _Nullable)data __attribute__((swift_name("init(type:data:)"))) __attribute__((objc_designated_initializer));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol UIOSKotlinx_serialization_coreEncoder
@required
- (id<UIOSKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<UIOSKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<UIOSKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<UIOSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<UIOSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) UIOSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol UIOSKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<UIOSKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<UIOSKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<UIOSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) UIOSKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol UIOSKotlinx_serialization_coreDecoder
@required
- (id<UIOSKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<UIOSKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (UIOSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<UIOSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<UIOSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) UIOSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

@protocol EmitterProtocol
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitEvent:(UIOSCoreEmitterEvent<id> *)event completionHandler:(void (^)(UIOSCoreEmitterEvent<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(event:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitType:(UIOSKotlinEnum<UIOSKotlinEnum *> *)type data:(id _Nullable)data completionHandler:(void (^)(UIOSCoreEmitterEvent<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(type:data:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitType:(NSString *)type data:(id _Nullable)data completionHandler_:(void (^)(UIOSCoreEmitterEvent<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(type:data:completionHandler_:)")));
- (void)offType:(UIOSKotlinEnum<UIOSKotlinEnum *> *)type handler:(id<UIOSKotlinSuspendFunction1> _Nullable)handler __attribute__((swift_name("off(type:handler:)")));
- (void)offType:(NSString *)type handler_:(id<UIOSKotlinSuspendFunction1> _Nullable)handler __attribute__((swift_name("off(type:handler_:)")));
- (id<UIOSKotlinSuspendFunction1>)onType:(UIOSKotlinEnum<UIOSKotlinEnum *> *)type handler:(id<UIOSKotlinSuspendFunction1>)handler __attribute__((swift_name("on(type:handler:)")));
- (id<UIOSKotlinSuspendFunction1>)onType:(NSString *)type handler_:(id<UIOSKotlinSuspendFunction1>)handler __attribute__((swift_name("on(type:handler_:)")));
- (id<UIOSKotlinSuspendFunction1>)onType:(UIOSKotlinEnum<UIOSKotlinEnum *> *)type removable:(BOOL)removable handler:(id<UIOSKotlinSuspendFunction1>)handler __attribute__((swift_name("on(type:removable:handler:)")));
- (id<UIOSKotlinSuspendFunction1>)onType:(NSString *)type removable:(BOOL)removable handler_:(id<UIOSKotlinSuspendFunction1>)handler __attribute__((swift_name("on(type:removable:handler_:)")));
- (id<UIOSKotlinSuspendFunction1>)onceType:(UIOSKotlinEnum<UIOSKotlinEnum *> *)type handler:(id<UIOSKotlinSuspendFunction1>)handler __attribute__((swift_name("once(type:handler:)")));
- (id<UIOSKotlinSuspendFunction1>)onceType:(NSString *)type handler_:(id<UIOSKotlinSuspendFunction1>)handler __attribute__((swift_name("once(type:handler_:)")));
@property (readonly) id<UIOSKotlinx_coroutines_coreFlow> events __attribute__((swift_name("events")));
@end

@protocol BrowserProtocol <EmitterProtocol>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)closeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("close(completionHandler:)")));
- (NSString *)handle __attribute__((swift_name("handle()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)PageWithCompletionHandler:(void (^)(id<PageProtocol> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("Page(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)PageFactory:(id<PageFactoryBaseProtocol>)factory completionHandler:(void (^)(id<PageProtocol> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("Page(factory:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)PageFactory:(id<PageProtocol> (^)(id<BrowserProtocol>))factory completionHandler_:(void (^)(id<PageProtocol> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("Page(factory:completionHandler_:)")));
- (NSArray<id<PageProtocol>> *)pages __attribute__((swift_name("pages()")));
@end

@protocol MuppetProtocol
@required
- (id<PageProtocol> _Nullable)getPageHandle:(NSString *)handle __attribute__((swift_name("getPage(handle:)")));
- (void)injectPage:(id<PageProtocol>)page factory:(id<BrowserFactoryProtocol>)factory __attribute__((swift_name("inject(page:factory:)")));
- (id<BrowserProtocol>)launchFactory:(id<BrowserFactoryProtocol>)factory __attribute__((swift_name("launch(factory:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol UIOSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol UIOSKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol UIOSKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<UIOSKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<UIOSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<UIOSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) UIOSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface UIOSKotlinx_serialization_coreSerializersModule : UIOSBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<UIOSKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<UIOSKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<UIOSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<UIOSKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<UIOSKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<UIOSKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<UIOSKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<UIOSKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol UIOSKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface UIOSKotlinx_serialization_coreSerialKind : UIOSBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol UIOSKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<UIOSKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<UIOSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<UIOSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<UIOSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) UIOSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface UIOSKotlinNothing : UIOSBase
@end

@protocol PageProtocol <EmitterProtocol>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addUserScriptScript:(NSString *)script completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addUserScript(script:completionHandler:)")));
- (void)clearHostAllowList __attribute__((swift_name("clearHostAllowList()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cookiesUrl:(NSString *)url completionHandler:(void (^)(NSArray<UIOSKtor_httpCookie *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cookies(url:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateJs:(NSString *)js completionHandler:(void (^)(id<UIOSKotlinx_coroutines_coreDeferred> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(js:completionHandler:)")));
- (void)evaluateJs:(NSString *)js handler:(void (^)(NSString * _Nullable))handler __attribute__((swift_name("evaluate(js:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)gotoUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers timeout:(int64_t)timeout completionHandler:(void (^)(id<UIOSKotlinx_coroutines_coreDeferred> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("goto(url:headers:timeout:completionHandler:)")));
- (NSString *)handle __attribute__((swift_name("handle()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hideAnimate:(BOOL)animate completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("hide(animate:completionHandler:)")));
- (id<PageProtocol> _Nullable)parent __attribute__((swift_name("parent()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)progressWithCompletionHandler:(void (^)(UIOSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("progress(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestMethod:(NSString *)method url:(NSString *)url data:(NSString * _Nullable)data headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers followRedirects:(BOOL)followRedirects stream:(id<UIOSKotlinx_coroutines_coreFlow> _Nullable)stream completionHandler:(void (^)(UIOSCoreResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("request(method:url:data:headers:followRedirects:stream:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)screenshotWidth:(int32_t)width height:(int32_t)height quality:(double)quality completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("screenshot(width:height:quality:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setCookieCookie:(UIOSKtor_httpCookie *)cookie completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setCookie(cookie:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setCookieCookies:(NSArray<UIOSKtor_httpCookie *> *)cookies completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setCookie(cookies:completionHandler:)")));
- (void)setHostAllowListAllowed:(NSArray<NSString *> *)allowed __attribute__((swift_name("setHostAllowList(allowed:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setUserAgentUserAgent:(NSString *)userAgent completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setUserAgent(userAgent:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showAnimate:(BOOL)animate completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("show(animate:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)urlWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("url(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)userAgentWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("userAgent(completionHandler:)")));
- (id _Nullable)view __attribute__((swift_name("view()")));
@end

@protocol PageFactoryBaseProtocol
@required
- (id<PageProtocol>)createBrowser:(id<BrowserProtocol>)browser __attribute__((swift_name("create(browser:)")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol UIOSKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol UIOSKotlinSuspendFunction1 <UIOSKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol UIOSKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<UIOSKotlinKClass>)kClass provider:(id<UIOSKotlinx_serialization_coreKSerializer> (^)(NSArray<id<UIOSKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<UIOSKotlinKClass>)kClass serializer:(id<UIOSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<UIOSKotlinKClass>)baseClass actualClass:(id<UIOSKotlinKClass>)actualClass actualSerializer:(id<UIOSKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<UIOSKotlinKClass>)baseClass defaultDeserializerProvider:(id<UIOSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<UIOSKotlinKClass>)baseClass defaultDeserializerProvider:(id<UIOSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<UIOSKotlinKClass>)baseClass defaultSerializerProvider:(id<UIOSKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol UIOSKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol UIOSKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol UIOSKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol UIOSKotlinKClass <UIOSKotlinKDeclarationContainer, UIOSKotlinKAnnotatedElement, UIOSKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol UIOSKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpCookie")))
@interface UIOSKtor_httpCookie : UIOSBase <UIOSKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name value:(NSString *)value encoding:(UIOSKtor_httpCookieEncoding *)encoding maxAge:(UIOSInt * _Nullable)maxAge expires:(UIOSKtor_utilsGMTDate * _Nullable)expires domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path secure:(BOOL)secure httpOnly:(BOOL)httpOnly extensions:(NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("init(name:value:encoding:maxAge:expires:domain:path:secure:httpOnly:extensions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UIOSKtor_httpCookieCompanion *companion __attribute__((swift_name("companion")));
- (UIOSKtor_httpCookie *)doCopyName:(NSString *)name value:(NSString *)value encoding:(UIOSKtor_httpCookieEncoding *)encoding maxAge:(UIOSInt * _Nullable)maxAge expires:(UIOSKtor_utilsGMTDate * _Nullable)expires domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path secure:(BOOL)secure httpOnly:(BOOL)httpOnly extensions:(NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("doCopy(name:value:encoding:maxAge:expires:domain:path:secure:httpOnly:extensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable domain __attribute__((swift_name("domain")));
@property (readonly) UIOSKtor_httpCookieEncoding *encoding __attribute__((swift_name("encoding")));
@property (readonly) UIOSKtor_utilsGMTDate * _Nullable expires __attribute__((swift_name("expires")));
@property (readonly) NSDictionary<NSString *, id> *extensions __attribute__((swift_name("extensions")));
@property (readonly) BOOL httpOnly __attribute__((swift_name("httpOnly")));
@property (readonly) UIOSInt * _Nullable maxAge __attribute__((swift_name("maxAge")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable path __attribute__((swift_name("path")));
@property (readonly) BOOL secure __attribute__((swift_name("secure")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol UIOSKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<UIOSKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<UIOSKotlinCoroutineContextElement> _Nullable)getKey:(id<UIOSKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<UIOSKotlinCoroutineContext>)minusKeyKey:(id<UIOSKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<UIOSKotlinCoroutineContext>)plusContext:(id<UIOSKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol UIOSKotlinCoroutineContextElement <UIOSKotlinCoroutineContext>
@required
@property (readonly) id<UIOSKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol UIOSKotlinx_coroutines_coreJob <UIOSKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<UIOSKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<UIOSKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(UIOSKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (UIOSKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<UIOSKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(UIOSKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<UIOSKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(UIOSKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<UIOSKotlinx_coroutines_coreJob>)plusOther:(id<UIOSKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<UIOSKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<UIOSKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly, getter=parent_) id<UIOSKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDeferred")))
@protocol UIOSKotlinx_coroutines_coreDeferred <UIOSKotlinx_coroutines_coreJob>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (UIOSKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<UIOSKotlinx_coroutines_coreSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponse")))
@interface UIOSCoreResponse : UIOSBase
- (instancetype)initWithStatus:(int32_t)status headers:(NSDictionary<NSString *, NSArray<NSString *> *> *)headers body:(id<UIOSKotlinx_coroutines_coreFlow>)body __attribute__((swift_name("init(status:headers:body:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bytesWithCompletionHandler:(void (^)(UIOSKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bytes(completionHandler:)")));
- (UIOSCoreResponse *)doCopyStatus:(int32_t)status headers:(NSDictionary<NSString *, NSArray<NSString *> *> *)headers body:(id<UIOSKotlinx_coroutines_coreFlow>)body __attribute__((swift_name("doCopy(status:headers:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, UIOSKotlinx_serialization_jsonJsonElement *> *)header __attribute__((swift_name("header()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)jsonObjectWithCompletionHandler:(void (^)(NSDictionary<NSString *, UIOSKotlinx_serialization_jsonJsonElement *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("jsonObject(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<UIOSKotlinx_coroutines_coreFlow> body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *headers __attribute__((swift_name("headers")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpCookieEncoding")))
@interface UIOSKtor_httpCookieEncoding : UIOSKotlinEnum<UIOSKtor_httpCookieEncoding *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) UIOSKtor_httpCookieEncoding *raw __attribute__((swift_name("raw")));
@property (class, readonly) UIOSKtor_httpCookieEncoding *dquotes __attribute__((swift_name("dquotes")));
@property (class, readonly) UIOSKtor_httpCookieEncoding *uriEncoding __attribute__((swift_name("uriEncoding")));
@property (class, readonly) UIOSKtor_httpCookieEncoding *base64Encoding __attribute__((swift_name("base64Encoding")));
+ (UIOSKotlinArray<UIOSKtor_httpCookieEncoding *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<UIOSKtor_httpCookieEncoding *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface UIOSKtor_utilsGMTDate : UIOSBase <UIOSKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(UIOSKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(UIOSKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UIOSKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(UIOSKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (UIOSKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (UIOSKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(UIOSKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(UIOSKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) UIOSKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) UIOSKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpCookie.Companion")))
@interface UIOSKtor_httpCookieCompanion : UIOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UIOSKtor_httpCookieCompanion *shared __attribute__((swift_name("shared")));
- (id<UIOSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol UIOSKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) UIOSKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<UIOSKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(UIOSKotlinThrowable *, id _Nullable, id<UIOSKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<UIOSKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol UIOSKotlinx_coroutines_coreSelectClause1 <UIOSKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol UIOSKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol UIOSKotlinx_coroutines_coreChildHandle <UIOSKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(UIOSKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly, getter=parent_) id<UIOSKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol UIOSKotlinx_coroutines_coreChildJob <UIOSKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<UIOSKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol UIOSKotlinSequence
@required
- (id<UIOSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol UIOSKotlinx_coroutines_coreSelectClause0 <UIOSKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol UIOSKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface UIOSKotlinByteArray : UIOSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(UIOSByte *(^)(UIOSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (UIOSKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface UIOSKotlinx_serialization_jsonJsonElement : UIOSBase
@property (class, readonly, getter=companion) UIOSKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface UIOSKtor_utilsWeekDay : UIOSKotlinEnum<UIOSKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UIOSKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UIOSKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) UIOSKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) UIOSKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) UIOSKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) UIOSKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) UIOSKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) UIOSKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (UIOSKotlinArray<UIOSKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<UIOSKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface UIOSKtor_utilsMonth : UIOSKotlinEnum<UIOSKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UIOSKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UIOSKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) UIOSKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) UIOSKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) UIOSKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) UIOSKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) UIOSKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) UIOSKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) UIOSKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) UIOSKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) UIOSKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) UIOSKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) UIOSKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (UIOSKotlinArray<UIOSKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<UIOSKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface UIOSKtor_utilsGMTDateCompanion : UIOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UIOSKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<UIOSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) UIOSKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface UIOSKotlinUnit : UIOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UIOSKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol UIOSKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<UIOSKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<UIOSKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol UIOSKotlinx_coroutines_coreParentJob <UIOSKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (UIOSKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface UIOSKotlinByteIterator : UIOSBase <UIOSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (UIOSByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface UIOSKotlinx_serialization_jsonJsonElementCompanion : UIOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UIOSKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<UIOSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface UIOSKtor_utilsWeekDayCompanion : UIOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UIOSKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (UIOSKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (UIOSKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface UIOSKtor_utilsMonthCompanion : UIOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UIOSKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (UIOSKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (UIOSKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
