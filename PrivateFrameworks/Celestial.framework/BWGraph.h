/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class <BWGraphStatusDelegate>, NSMutableArray, NSObject<OS_dispatch_group>;

@interface BWGraph : NSObject  {
    NSMutableArray *_nodes;
    NSMutableArray *_sourceNodes;
    NSMutableArray *_sinkNodes;
    NSMutableArray *_connections;
    NSMutableArray *_outputsWithSharedPools;
    bool_running;
    bool_beingConfigured;
    long long _inflightConfigurationID;
    NSObject<OS_dispatch_group> *_startGroup;
    NSObject<OS_dispatch_group> *_commitGroup;
    bool_supportsLiveReconfiguration;
    int _errorStatus;
    <BWGraphStatusDelegate> *_statusDelegate;
    bool_classicRetainedBufferCount;
}

@property(readonly) bool supportsLiveReconfiguration;
@property <BWGraphStatusDelegate> * statusDelegate;
@property int errorStatus;

+ (void)initialize;

- (bool)stop:(id*)arg1;
- (id)_reverseBreadthFirstEnumerator;
- (id)_depthFirstEnumerator;
- (id)_breadthFirstEnumerator;
- (id)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg1;
- (void)_makeParentConfigurationChangesLive;
- (bool)_prepareNodesWithConfigurationChanges:(id*)arg1;
- (bool)_resolveRetainedBufferCounts:(id*)arg1;
- (bool)_resolveFormats:(id*)arg1;
- (void)_waitForOutstandingStartOrCommitOperationToComplete;
- (int)errorStatus;
- (id)statusDelegate;
- (void)setErrorStatus:(int)arg1;
- (id)_newDispatchGroupForSinksToTransitionToState:(int)arg1;
- (id)_sinkNodes;
- (id)_sourceNodes;
- (void)waitForOutstandingStartOrCommitOperationToComplete;
- (bool)supportsLiveReconfiguration;
- (bool)connectOutput:(id)arg1 toInput:(id)arg2 pipelineStage:(id)arg3;
- (bool)addNode:(id)arg1 error:(id*)arg2;
- (bool)commitConfigurationWithID:(long long)arg1 error:(id*)arg2;
- (void)setStatusDelegate:(id)arg1;
- (bool)start:(id*)arg1;
- (id)init;
- (void)dealloc;
- (id)dotString;
- (void)beginConfiguration;

@end
