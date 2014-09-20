/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@class NSMutableArray;

@interface PRPinyinContext : PRAutocorrectionContext  {
    NSMutableArray *_modifications;
    NSMutableArray *_addedModifications;
    NSMutableArray *_removedModifications;
    NSMutableArray *_addedRemovedModifications;
    NSMutableArray *_prefixes;
    char *_buffer;
    char *_altBuffer;
    char *_altBufferScores;
    NSMutableArray *_geometryDataArray;
    unsigned long long *_syllableLengthArray;
    void *_connection;
    unsigned long long _length;
    unsigned long long _lengthBeforeApostrophes;
    unsigned long long _startingPoint;
    unsigned long long _lastIndexes[4];
    unsigned long long _nextIndexes[2];
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    unsigned long long _abbreviatedSyllableCount;
    unsigned long long _previouslyAnalyzedLength;
    double _validSequenceCorrectionThreshold;
    bool_lastSyllableIsPartial;
}


- (id)addedModifications;
- (id)removedModifications;
- (void)setValidSequenceCorrectionThreshold:(double)arg1;
- (id)prefixes;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3;
- (void)_addPrefixes;
- (void)_removePrefixes;
- (void)_addValidSequenceReplacements;
- (void)_addEnglishWordsQuickly:(bool)arg1;
- (void)_addSpecialEnglishWords;
- (bool)_addEnglishWordsEndingAtIndex:(unsigned long long)arg1 quickly:(bool)arg2;
- (bool)_addEnglishWordForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 quickly:(bool)arg2;
- (double)validSequenceCorrectionThreshold;
- (id)currentModifications;
- (void)removeNumberOfInputCharacters:(unsigned long long)arg1;
- (void)_addInsertions;
- (void)_filterModifications;
- (void)_addDeletions;
- (void)_addReplacements;
- (void)_addTranspositions;
- (void)_advanceIndexes;
- (void)_removeModificationsAndMoveStartingPoint;
- (void)reset;
- (id)description;
- (id)init;
- (void)dealloc;

@end
