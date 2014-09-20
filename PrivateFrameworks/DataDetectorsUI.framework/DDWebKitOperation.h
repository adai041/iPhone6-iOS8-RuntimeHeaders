/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class DOMNode, WebFrame;

@interface DDWebKitOperation : DDOperation  {
    DOMNode *_startNode;
    int _startOffset;
    DOMNode *_endNode;
    int _endOffset;
}

@property(retain) DOMNode * startNode;
@property int startOffset;
@property(retain) DOMNode * endNode;
@property int endOffset;
@property(retain) WebFrame * container;


- (void)setEndOffset:(int)arg1;
- (id)endNode;
- (id)startNode;
- (void)setEndNode:(id)arg1;
- (void)setStartNode:(id)arg1;
- (struct __DDScanQuery { }*)_createScanQueryForBackend;
- (bool)_rangeValidForContainer;
- (void)_updateGenerationNumber;
- (bool)_containerReadyForDetection;
- (void)_applyContainerRestrictionsToTypes;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (bool)doURLificationOnDocument;
- (bool)needsToStartOver;
- (bool)containerIsReady;
- (void)dispatchContainerModificationBlock:(id)arg1;
- (void)cleanup;
- (void)setStartOffset:(int)arg1;
- (int)startOffset;
- (int)endOffset;

@end
