/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject  {
}

@property(readonly) unsigned short resultType;
@property(readonly) double numberValue;
@property(copy,readonly) NSString * stringValue;
@property(readonly) bool booleanValue;
@property(readonly) DOMNode * singleNodeValue;
@property(readonly) bool invalidIteratorState;
@property(readonly) unsigned int snapshotLength;


- (id)snapshotItem:(unsigned int)arg1;
- (id)iterateNext;
- (unsigned int)snapshotLength;
- (bool)invalidIteratorState;
- (id)singleNodeValue;
- (bool)booleanValue;
- (double)numberValue;
- (unsigned short)resultType;
- (void)finalize;
- (id)stringValue;
- (void)dealloc;

@end
