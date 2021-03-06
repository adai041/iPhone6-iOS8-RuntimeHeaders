/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CLIntersiloInterface, CLSilo;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol> {
    bool_valid;
    CLSilo *_silo;
    CLIntersiloInterface *_inboundInterface;
    CLIntersiloInterface *_outboundInterface;
}

@property(readonly) CLSilo * silo;
@property(readonly) CLIntersiloInterface * inboundInterface;
@property(readonly) CLIntersiloInterface * outboundInterface;
@property bool valid;

+ (id)getSilo;
+ (void)becameFatallyBlocked:(id)arg1;

- (void)setValid:(bool)arg1;
- (void).cxx_destruct;
- (bool)valid;
- (id)debugDescription;
- (id)init;
- (bool)isHydrated;
- (id)outboundInterface;
- (id)inboundInterface;
- (id)initInSilo:(id)arg1;
- (id)silo;
- (id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 andSilo:(id)arg3;

@end
