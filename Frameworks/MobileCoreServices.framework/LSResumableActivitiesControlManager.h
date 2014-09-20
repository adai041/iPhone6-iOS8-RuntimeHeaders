/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSXPCConnection;

@interface LSResumableActivitiesControlManager : NSObject  {
    NSXPCConnection *connection;
    id _delegate;
}

@property id delegate;
@property(retain) NSXPCConnection * connection;

+ (id)resumableActivitiesControlManager;

- (id)status;
- (void)setConnection:(id)arg1;
- (id)connection;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)callDidSaveDelegate:(id)arg1;
- (void)callWillSaveDelegate:(id)arg1 completionHandler:(id)arg2;
- (void)callWillSaveDelegate:(id)arg1;
- (void)injectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 frameworkPayload:(id)arg6 payloadDelay:(double)arg7;
- (void)restartServer;
- (id)enabledUUIDs;
- (id)allUUIDsOfType:(unsigned long long)arg1;
- (id)advertisedItemUUID;
- (id)matchingUUIDForString:(id)arg1;
- (void)terminateServer;

@end
