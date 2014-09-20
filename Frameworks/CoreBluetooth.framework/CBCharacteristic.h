/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBService, NSArray, NSData, CBPeripheral, NSNumber;

@interface CBCharacteristic : CBAttribute  {
    CBService *_service;
    unsigned long long _properties;
    NSData *_value;
    NSArray *_descriptors;
    bool_isBroadcasted;
    bool_isNotifying;
    CBPeripheral *_peripheral;
    NSNumber *_handle;
    NSNumber *_valueHandle;
}

@property CBService * service;
@property(readonly) unsigned long long properties;
@property(retain) NSData * value;
@property(retain) NSArray * descriptors;
@property(readonly) bool isBroadcasted;
@property bool isNotifying;
@property(readonly) CBPeripheral * peripheral;
@property(readonly) NSNumber * handle;
@property(readonly) NSNumber * valueHandle;


- (id)handle;
- (id)peripheral;
- (void)setService:(id)arg1;
- (id)service;
- (void)setDescriptors:(id)arg1;
- (id)descriptors;
- (unsigned long long)properties;
- (id)value;
- (void)setValue:(id)arg1;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (bool)isNotifying;
- (bool)isBroadcasted;
- (id)handleDescriptorsDiscovered:(id)arg1;
- (id)handleValueNotifying:(id)arg1;
- (id)handleValueBroadcasted:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
- (id)valueHandle;
- (void)setIsNotifying:(bool)arg1;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;

@end
