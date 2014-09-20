/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class ASAsset, NSString;

@interface _UIDefinitionDictionary : NSObject  {
    struct __DCSDictionary { } *_dictionary;
    bool_activated;
    ASAsset *_rawAsset;
    NSString *_definitionLanguage;
}

@property(readonly) ASAsset * rawAsset;
@property(readonly) NSString * localizedLanguageName;
@property(readonly) NSString * localizedDictionaryName;
@property(readonly) NSString * definitionLanguage;
@property bool activated;

+ (id)_normalizedLanguageStringForLanguageCode:(id)arg1;

- (void)setActivated:(bool)arg1;
- (id)definitionLanguage;
- (id)_definitionValueForTerm:(id)arg1;
- (bool)_hasDefinitionForTerm:(id)arg1;
- (id)localizedLanguageName;
- (id)initWithAsset:(id)arg1;
- (bool)activated;
- (id)_fullHTMLDefinitionForTerm:(id)arg1;
- (id)_attributedDefinitionForTerm:(id)arg1;
- (id)_shortHTMLDefinitionForTerm:(id)arg1;
- (id)_HTMLDefinitionForTerm:(id)arg1 type:(long long)arg2;
- (id)rawAsset;
- (id)localizedDictionaryName;
- (id)description;
- (void)dealloc;

@end
