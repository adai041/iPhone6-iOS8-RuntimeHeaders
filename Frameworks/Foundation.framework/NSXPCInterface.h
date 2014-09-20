/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class Protocol;

@interface NSXPCInterface : NSObject  {
    Protocol *_protocol;
    struct __CFDictionary { } *_methods2;
    id _reserved1;
}

@property Protocol * protocol;

+ (id)interfaceWithProtocol:(id)arg1;
+ (id)signatureForBlock:(id)arg1;

- (void)finalize;
- (void)setProtocol:(id)arg1;
- (id)protocol;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (id)debugDescription;
- (id)init;
- (void)dealloc;
- (id)replyBlockSignatureForSelector:(SEL)arg1;
- (void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2;
- (Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)_verifiedMethodSignatureForSelector:(SEL)arg1;
- (id)_allowedClassesForSelector:(SEL)arg1 reply:(bool)arg2;
- (id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(bool)arg3;
- (id)_verifiedMethodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;

@end
