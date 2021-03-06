/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@class JSValue, NSMapTable;

@interface JSManagedValue : NSObject  {
    struct Weak<JSC::JSGlobalObject> { 
        struct WeakImpl {} *m_impl; 
    } m_globalObject;
    struct RefPtr<JSC::JSLock> { 
        struct JSLock {} *m_ptr; 
    } m_lock;
    struct WeakValueRef { 
        int m_tag; 
        union WeakValueUnion { 
            struct JSValue { 
                union EncodedValueDescriptor { 
                    long long asInt64; 
                    struct JSCell {} *ptr; 
                    struct { 
                        int payload; 
                        int tag; 
                    } asBits; 
                } u; 
            } m_primitive; 
            struct Weak<JSC::JSObject> { 
                struct WeakImpl {} *m_impl; 
            } m_object; 
            struct Weak<JSC::JSString> { 
                struct WeakImpl {} *m_impl; 
            } m_string; 
        } u; 
    } m_weakValue;
    NSMapTable *m_owners;
}

@property(readonly) JSValue * value;

+ (id)managedValueWithValue:(id)arg1;
+ (id)managedValueWithValue:(id)arg1 andOwner:(id)arg2;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)value;
- (id)init;
- (void)dealloc;
- (void)didRemoveOwner:(id)arg1;
- (void)didAddOwner:(id)arg1;
- (void)disconnectValue;
- (id)initWithValue:(id)arg1;

@end
