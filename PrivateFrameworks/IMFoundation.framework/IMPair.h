/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPair : NSObject <NSCopying> {
    id _first;
    id _second;
}

@property(retain) id first;
@property(retain) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (void)setFirst:(id)arg1;
- (id)first;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (void)setSecond:(id)arg1;
- (id)second;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
