/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary;

@interface _UIDictationAttachment : NSTextAttachment  {
    NSDictionary *_typingAttributesBeforeInsertion;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _attachmentRange;
}

@property struct _NSRange { unsigned long long x1; unsigned long long x2; } attachmentRange;
@property(copy) NSDictionary * typingAttributesBeforeInsertion;


- (void)setTypingAttributesBeforeInsertion:(id)arg1;
- (id)typingAttributesBeforeInsertion;
- (void)setAttachmentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })attachmentRange;
- (void)dealloc;

@end
