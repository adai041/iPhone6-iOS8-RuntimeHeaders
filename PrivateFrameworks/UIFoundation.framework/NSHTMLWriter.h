/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSData, NSAttributedString, NSFileWrapper, NSString, NSURL, NSMutableDictionary, NSDictionary, NSMutableString, NSMutableArray, NSMutableOrderedSet, NSMutableIndexSet;

@interface NSHTMLWriter : NSObject  {
    NSAttributedString *_attrStr;
    NSDictionary *_documentAttrs;
    NSData *_htmlData;
    NSMutableString *_bodyStr;
    NSFileWrapper *_fileWrapper;
    NSMutableDictionary *_subresources;
    NSData *_webArchiveData;
    NSMutableArray *_paraStyleStrings;
    NSMutableArray *_paraStyleArrays;
    NSMutableIndexSet *_paraStyleIndexes;
    NSMutableIndexSet *_listItemStyleIndexes;
    NSMutableOrderedSet *_charStyleStrings;
    NSMutableArray *_charStyleArrays;
    NSMutableArray *_fontStrings;
    NSMutableArray *_tableStyleStrings;
    NSMutableArray *_tableCellStyleStrings;
    NSMutableArray *_blockStyleStrings;
    NSMutableArray *_olistStyleStrings;
    NSMutableArray *_ulistStyleStrings;
    NSMutableDictionary *_fontNames;
    NSMutableDictionary *_fontDescriptions;
    long long _level;
    long long _prefixSpaces;
    NSString *_textEncodingName;
    unsigned long long _characterEncoding;
    NSURL *_outputBaseURL;
    id _resourceHandler;
    unsigned int _excludedElements1;
    unsigned int _excludedElements2;
    struct { 
        unsigned int interchangeNewline : 1; 
        unsigned int noDefaultFonts : 1; 
        unsigned int tabsToSpaces : 1; 
        unsigned int coalesceTabSpans : 1; 
        unsigned int usedTabSpan : 1; 
        unsigned int encodingIsUnicode : 1; 
        unsigned int pad : 26; 
    } _flags;
}


- (id)subresources;
- (void)_createWebArchiveData;
- (void)_generateHTML;
- (void)_prepareString:(id)arg1 forConversionToEncoding:(unsigned long long)arg2;
- (void)_writeDocumentPropertiesToString:(id)arg1;
- (bool)_closeBlocksForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3;
- (bool)_closeListsForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3;
- (void)_appendAttachment:(id)arg1 atIndex:(unsigned long long)arg2 toString:(id)arg3;
- (void)_openListsForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3 isStrict:(bool)arg4;
- (void)_openBlocksForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3;
- (unsigned long long)_paragraphClassforParagraphStyle:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isEmpty:(bool)arg3 isCompletelyEmpty:(bool)arg4 headerString:(id*)arg5 alignmentString:(id*)arg6 directionString:(id*)arg7;
- (void)_closeFlags:(unsigned long long)arg1 openFlags:(unsigned long long)arg2 inString:(id)arg3;
- (unsigned long long)_spanClassForAttributes:(id)arg1 inParagraphClass:(unsigned long long)arg2 spanClass:(unsigned long long)arg3 flags:(unsigned long long*)arg4;
- (bool)_isStrictByParsingExcludedElements;
- (unsigned long long)_listClassForList:(id)arg1;
- (id)_prefixDown;
- (id)_prefixUp;
- (unsigned long long)_blockClassForBlock:(id)arg1;
- (void)_writeDocumentProperty:(id)arg1 value:(id)arg2 toString:(id)arg3;
- (id)_prefix;
- (id)_defaultValueForAttribute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (Class)_webArchiveClass;
- (id)documentFragmentForDocument:(id)arg1;
- (void)readDocumentFragment:(id)arg1;
- (id)HTMLFileWrapper;
- (id)webArchiveData;
- (id)webArchive;
- (id)HTMLData;
- (void)setDocumentAttributes:(id)arg1;
- (id)initWithAttributedString:(id)arg1;
- (void)dealloc;

@end
