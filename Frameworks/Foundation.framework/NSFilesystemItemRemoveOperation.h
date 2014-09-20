/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSError;

@interface NSFilesystemItemRemoveOperation : NSOperation  {
    id _delegate;
    NSString *_removePath;
    NSError *_error;
    void *_state;
    bool_filterUnderbars;
}

+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
+ (id)filesystemItemRemoveOperationWithPath:(id)arg1;

- (id)error;
- (void)main;
- (id)initWithPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)_setError:(id)arg1;
- (void)_setFilterUnderbars:(bool)arg1;
- (bool)_filtersUnderbars;

@end
