/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSData, NSString, NSDate;

@interface NSPageData : NSData  {
    NSData *data;
    NSDate *_originalFileModDate;
    NSString *_originalFilePath;
}

+ (void)initialize;
+ (long long)_umask;

- (id)initWithDataNoCopy:(id)arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)data;
- (const void*)bytes;
- (unsigned long long)length;
- (id)init;
- (void)dealloc;
- (id)deserializer;
- (id)initFromSerializerStream:(id)arg1 length:(unsigned long long)arg2;
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(bool)arg4 hardLinkPath:(id)arg5;
- (id)_mappedFile;
- (id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2;
- (void)_setOriginalFileInfoFromFileAttributes:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (unsigned long long)writeFd:(long long)arg1;
- (unsigned long long)writeFile:(id)arg1;

@end
