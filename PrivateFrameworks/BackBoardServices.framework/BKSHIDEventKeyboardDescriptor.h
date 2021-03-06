/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventKeyboardDescriptor : BKSHIDEventDescriptor  {
    unsigned int _page;
    unsigned int _usage;
}

@property(readonly) unsigned int page;
@property(readonly) unsigned int usage;

+ (id)descriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (unsigned int)usage;
- (id)_initWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 eventType:(unsigned int)arg3;
- (bool)describes:(id)arg1;
- (unsigned int)page;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
