/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSUUID, NSExtension, <PKPlugIn>;

@interface _UIRemoteViewService : NSObject  {
    NSExtension *_extension;
    NSUUID *_contextToken;
}

@property(retain) NSExtension * extension;
@property(retain) <PKPlugIn> * plugin;
@property(copy) NSUUID * contextToken;


- (void)setContextToken:(id)arg1;
- (id)contextToken;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2;
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;
- (id)extension;
- (void)setExtension:(id)arg1;
- (void)dealloc;

@end
