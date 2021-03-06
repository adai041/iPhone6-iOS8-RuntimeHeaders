/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSExpression, NSString, NSPropertyTransform;

@interface NSPropertyTransform : NSObject  {
    NSExpression *_valueExpression;
    NSString *_propertyName;
    NSPropertyTransform *_prerequisiteTransform;
    bool_replaceMissingValueOnly;
}

@property(retain) NSString * propertyName;
@property(retain) NSExpression * valueExpression;
@property(retain) NSPropertyTransform * prerequisiteTransform;
@property bool replaceMissingValueOnly;


- (id)propertyName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (bool)replaceMissingValueOnly;
- (id)prerequisiteTransform;
- (void)setPropertyName:(id)arg1;
- (id)valueExpression;
- (void)setValueExpression:(id)arg1;
- (void)setReplaceMissingValueOnly:(bool)arg1;
- (void)setPrerequisiteTransform:(id)arg1;
- (id)initWithPropertyName:(id)arg1 valueExpression:(id)arg2;

@end
