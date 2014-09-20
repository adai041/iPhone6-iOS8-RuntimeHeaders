/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSString, NSError;

@interface MFIMAPSimpleDownload : MFIMAPDownload  {
    NSString *_section;
    NSError *_error;
    unsigned long long _length;
    unsigned int _knownLength : 1;
    unsigned int _complete : 1;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
    unsigned long long _originalDataLength;
    unsigned long long _offsetAdjustment;
}


- (void)setError:(id)arg1;
- (id)error;
- (unsigned long long)expectedLength;
- (id)initWithUid:(unsigned int)arg1 section:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 consumer:(id)arg4;
- (id)initWithUid:(unsigned int)arg1 section:(id)arg2 length:(unsigned long long)arg3 consumer:(id)arg4;
- (id)initWithUid:(unsigned int)arg1 section:(id)arg2 estimatedLength:(unsigned long long)arg3 consumer:(id)arg4;
- (id)initWithUid:(unsigned int)arg1 section:(id)arg2 length:(unsigned long long)arg3 lengthIsKnown:(bool)arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 consumer:(id)arg6;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)processResults;
- (void)handleFetchResult:(id)arg1;
- (unsigned long long)bytesFetched;
- (id)section;
- (void)dealloc;
- (bool)isComplete;

@end
