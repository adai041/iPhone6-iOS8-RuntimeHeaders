/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, PFUbiquityLocation, NSURL, NSOperationQueue;

@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter> {
    NSString *_storeName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_uuidString;
    PFUbiquityLocation *_uuidFileLocation;
    NSURL *_presentedItemURL;
    bool_usedExistingUUIDFile;
}

@property(readonly) NSString * uuidString;
@property(readonly) PFUbiquityLocation * uuidFileLocation;
@property(readonly) bool usedExistingUUIDFile;
@property(readonly) NSURL * presentedItemURL;
@property(readonly) NSOperationQueue * presentedItemOperationQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSURL * primaryPresentedItemURL;


- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)uuidFileLocation;
- (bool)writeToDisk:(id*)arg1;
- (void)setUUIDStringFromLocation:(id)arg1;
- (bool)replaceIdentifierWithUUID:(id)arg1 error:(id*)arg2;
- (bool)usedExistingUUIDFile;
- (bool)identifyContainer:(id*)arg1;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)uuidString;

@end
