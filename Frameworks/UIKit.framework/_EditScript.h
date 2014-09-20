/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, <_EditScriptData>, _IntArray2D, NSMutableArray;

@interface _EditScript : NSObject  {
    bool_orderAtomsAscending;
    _IntArray2D *_distanceMatrix;
    long long _currentOperation;
    <_EditScriptData> *_itemAData;
    <_EditScriptData> *_itemBData;
    NSArray *_operationPrecedenceArray;
    NSMutableArray *_script;
}

@property(copy) NSArray * operationPrecedenceArray;
@property(retain) NSMutableArray * script;


- (void)setOperationPrecedenceArray:(id)arg1;
- (id)operationPrecedenceArray;
- (void)setScript:(id)arg1;
- (id)operationPrecedenceArrayFromOperationPrecedence:(long long)arg1;
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;
- (void)initializeCurrentScriptAtom;
- (void)finalizeCurrentScriptAtom;
- (id)script;
- (void)computeEditsFromMatrix;
- (void)computeDistanceMatrix;
- (id)initWithOperationPrecedence:(long long)arg1 orderAtomsAscending:(bool)arg2;
- (id)description;
- (void)dealloc;

@end
