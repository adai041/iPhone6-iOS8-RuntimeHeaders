/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSAttributedString, NSString, NSArray, NSMutableAttributedString, NSMutableArray;

@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext  {
    NSMutableAttributedString *_content;
    NSMutableArray *_attachments;
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    unsigned long long _offset;
    long long _baseWritingDirection;
    bool_extractAttachments;
    bool_hadBaseWritingDirectionAttribute;
}

@property(retain,readonly) NSAttributedString * sanitizedContent;
@property(retain,readonly) NSArray * attachments;


- (id)sanitizedContent;
- (id)initWithAttributedString:(id)arg1 extractAttachments:(bool)arg2;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 characters:(id)arg4;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8;
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;
- (void)parserDidEnd:(id)arg1;
- (id)resultsForLogging;
- (id)attachments;
- (id)name;
- (void)dealloc;

@end
