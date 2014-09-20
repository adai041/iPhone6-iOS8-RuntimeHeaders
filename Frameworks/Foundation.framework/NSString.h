/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
}

@property(readonly) NSString * mobileMeDomain;
@property(readonly) bool hasMobileMeSuffix;
@property(readonly) NSString * stripMobileMSuffixIfPresent;
@property(copy,readonly) NSString * stringByRemovingPercentEncoding;
@property(readonly) unsigned long long length;

+ (id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
+ (id)localizedStringWithFormat:(id)arg1;
+ (id)stringWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (id)stringWithString:(id)arg1;
+ (id)string;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)stringWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
+ (id)stringWithFormat:(id)arg1;
+ (id)stringWithUTF8String:(const char *)arg1;
+ (id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfURL:(id)arg1;
+ (id)stringWithContentsOfFile:(id)arg1;
+ (id)stringWithFormat:(id)arg1 locale:(id)arg2;
+ (id)stringWithCString:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithCString:(const char *)arg1;
+ (id)stringWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
+ (id)pathWithComponents:(id)arg1;
+ (const unsigned long long*)availableStringEncodings;
+ (unsigned long long)defaultCStringEncoding;
+ (id)localizedNameOfStringEncoding:(unsigned long long)arg1;
+ (unsigned long long)stringEncodingForData:(id)arg1 encodingOptions:(id)arg2 convertedString:(id*)arg3 usedLossyConversion:(bool*)arg4;
+ (id)_web_stringRepresentationForBytes:(long long)arg1;
+ (id)cutStringGUID;
+ (id)randomString;
+ (id)copyStringGUID;
+ (id)generatedRoomNameForGroupChat;
+ (id)stringGUID;
+ (id)copyStringGUIDForObject:(id)arg1;
+ (id)stringGUIDForObject:(id)arg1;
+ (struct USet { }*)_nonFullwidthLettersAndNumbersSet;
+ (struct USet { }*)_fullwidthLettersAndNumbersSet;
+ (struct USet { }*)_bopomofoToneSet;
+ (struct USet { }*)_bopomofoSet;
+ (struct USet { }*)_nonHiraganaKatakanaOrBopomofoSet;
+ (struct USet { }*)_nonKatakanaOrKanjiSet;
+ (struct USet { }*)_nonHiraganaOrKatakanaSet;
+ (struct USet { }*)_hiraganaSet;
+ (struct USet { }*)_nonJapaneseLetterSet;
+ (struct USet { }*)_nonIdeographicCharacterSet;
+ (struct USet { }*)_japaneseLetterSet;
+ (struct USet { }*)_ideographSet;
+ (struct USet { }*)_characterSetWithPattern:(id)arg1;
+ (id)stringWithUnichar:(unsigned int)arg1;
+ (id)_stringWithUnichar:(unsigned int)arg1;
+ (void)setHyphenationFactor:(float)arg1;
+ (bool)showsControlCharacters;
+ (void)setShowsControlCharacters:(bool)arg1;
+ (bool)showsInvisibleCharacters;
+ (void)setShowsInvisibleCharacters:(bool)arg1;
+ (void)setUsesScreenFonts:(bool)arg1;
+ (bool)usesScreenFonts;
+ (void)setTypesetterBehavior:(long long)arg1;
+ (bool)usesFontLeading;
+ (float)hyphenationFactor;
+ (long long)typesetterBehavior;
+ (double)defaultBaselineOffsetForFont:(id)arg1;
+ (double)defaultLineHeightForFont:(id)arg1;
+ (void)setUsesFontLeading:(bool)arg1;
+ (id)sbs_stringFromCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)MCMakeUUID;
+ (id)_web_stringWithData:(id)arg1 textEncodingName:(id)arg2;
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)arg1;

- (id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (id)precomposedStringWithCanonicalMapping;
- (int)intValue;
- (id)initWithCString:(const char *)arg1;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
- (id)decomposedStringWithCanonicalMapping;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4;
- (id)stringByPaddingToLength:(unsigned long long)arg1 withString:(id)arg2 startingAtIndex:(unsigned long long)arg3;
- (void)enumerateSubstringsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id)arg3;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(bool)arg4;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithFormat:(id)arg1 locale:(id)arg2;
- (id)stringByReplacingCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (id)capitalizedString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (bool)containsString:(id)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithData:(id)arg1 usedEncoding:(unsigned long long*)arg2;
- (id)initWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)commonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;
- (void)getCharacters:(unsigned short*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)uppercaseString;
- (id)initWithUTF8String:(const char *)arg1;
- (id)lowercaseString;
- (id)componentsSeparatedByCharactersInSet:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfComposedCharacterSequenceAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterFromSet:(id)arg1;
- (long long)compare:(id)arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (long long)longLongValue;
- (long long)localizedStandardCompare:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (id)substringToIndex:(unsigned long long)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)initWithString:(id)arg1;
- (id)uppercaseStringWithLocale:(id)arg1;
- (id)stringByTrimmingCharactersInSet:(id)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfComposedCharacterSequencesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (float)floatValue;
- (id)initWithFormat:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1;
- (id)substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (Class)classForCoder;
- (id)stringByAppendingString:(id)arg1;
- (bool)hasSuffix:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)stringByAppendingFormat:(id)arg1;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2;
- (long long)caseInsensitiveCompare:(id)arg1;
- (long long)integerValue;
- (double)doubleValue;
- (unsigned long long)length;
- (id)substringFromIndex:(unsigned long long)arg1;
- (bool)hasPrefix:(id)arg1;
- (id)componentsSeparatedByString:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)boolValue;
- (bool)isEqualToString:(id)arg1;
- (bool)getExternalRepresentation:(id*)arg1 extendedAttributes:(id*)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned long long)arg4 error:(id*)arg5;
- (id)displayableString;
- (void)enumerateLinesUsingBlock:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lineRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)stringByFoldingWithOptions:(unsigned long long)arg1 locale:(id)arg2;
- (bool)localizedCaseInsensitiveContainsString:(id)arg1;
- (id)_initWithBytesOfUnknownEncoding:(char *)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 usedEncoding:(unsigned long long*)arg4;
- (id)_initWithDataOfUnknownEncoding:(id)arg1;
- (void)_getBlockStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 stopAtLineSeparators:(bool)arg5;
- (id)capitalizedStringWithLocale:(id)arg1;
- (id)lowercaseStringWithLocale:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;
- (id)quotedStringRepresentation;
- (bool)_allowsDirectEncoding;
- (id)precomposedStringWithCompatibilityMapping;
- (id)decomposedStringWithCompatibilityMapping;
- (id)_stringRepresentation;
- (void)getParagraphStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (bool)_isCString;
- (void)getLineStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 zone:(struct _NSZone { }*)arg2;
- (const unsigned short*)_fastCharacterContents;
- (const char *)_fastCStringContents:(bool)arg1;
- (id)LS_unescapedQueryValue;
- (id)queryToDict;
- (bool)LS_hasCaseInsensitivePrefix:(id)arg1;
- (id)__escapeString5991;
- (unsigned char)_encodingCantBeStoredInEightBitCFString;
- (unsigned int)_fastestEncodingInCFStringEncoding;
- (unsigned int)_smallestEncodingInCFStringEncoding;
- (bool)_getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned int)arg3;
- (id)_createSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)_cfTypeID;
- (id)stringByExpandingTildeInPath;
- (id)stringByAbbreviatingWithTildeInPath;
- (bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)stringByDeletingLastPathComponent;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByDeletingPathExtension;
- (id)pathExtension;
- (const char *)fileSystemRepresentation;
- (id)lastPathComponent;
- (id)stringByStandardizingPath;
- (bool)isAbsolutePath;
- (id)pathComponents;
- (id)stringByResolvingSymlinksInPath;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByConvertingURLToPath;
- (id)stringByConvertingPathToURL;
- (unsigned long long)completePathIntoString:(id*)arg1 caseSensitive:(bool)arg2 matchesIntoArray:(id*)arg3 filterTypes:(id)arg4;
- (id)stringsByAppendingPaths:(id)arg1;
- (id)_stringByStandardizingPathUsingCache:(bool)arg1;
- (id)_stringByResolvingSymlinksInPathUsingCache:(bool)arg1;
- (bool)isNSString__;
- (id)propertyListFromStringsFileFormat;
- (id)propertyList;
- (id)_copyFormatStringWithConfiguration:(id)arg1;
- (id)formatConfiguration;
- (bool)canBeConvertedToEncoding:(unsigned long long)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(bool)arg2;
- (unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (bool)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (bool)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (const char *)UTF8String;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (const char *)lossyCString;
- (bool)getBytes:(char *)arg1 maxLength:(unsigned long long)arg2 filledLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 allowLossyConversion:(bool)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (unsigned long long)smallestEncoding;
- (unsigned long long)fastestEncoding;
- (unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (unsigned long long)cStringLength;
- (void)getCString:(char *)arg1;
- (const char *)cString;
- (id)urlPathRelativeToPath:(id)arg1;
- (id)stringByRemovingPercentEscapes;
- (id)standardizedURLPath;
- (id)stringByAddingPercentEscapes;
- (id)stringByRemovingPercentEncoding;
- (id)stringByAddingPercentEncodingWithAllowedCharacters:(id)arg1;
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;
- (id)_web_HTTPStyleLanguageCode;
- (bool)_web_looksLikeIPAddress;
- (id)_web_stringByTrimmingWhitespace;
- (bool)_web_hasCaseInsensitivePrefix:(id)arg1;
- (bool)_web_isCaseInsensitiveEqualToString:(id)arg1;
- (unsigned int)_web_extractFourCharCode;
- (id)_web_stringByCollapsingNonPrintingCharacters;
- (id)_web_URLFragment;
- (bool)_web_isFileURL;
- (bool)_web_looksLikeAbsoluteURL;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLHost;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLUserPasswordHostPort;
- (id)_web_fixedCarbonPOSIXPath;
- (id)_web_stringByExpandingTildeInPath;
- (id)_web_domainFromHost;
- (bool)_web_domainMatches:(id)arg1;
- (long long)_web_countOfString:(id)arg1;
- (bool)_web_hasCountryCodeTLD;
- (id)_web_filenameByFixingIllegalCharacters;
- (bool)_web_isJavaScriptURL;
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;
- (id)_web_fileNameFromContentDispositionHeader_nowarn;
- (id)_web_characterSetFromContentTypeHeader_nowarn;
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;
- (id)_web_parseAsKeyValuePair_nowarn;
- (id)_web_splitAtNonDateCommas_nowarn;
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLScheme_nowarn;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLResourceSpecifier_nowarn;
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)_flushRegularExpressionCaches;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfRegularExpressionPattern:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })significantText;
- (void)enumerateLinguisticTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 usingBlock:(id)arg5;
- (id)linguisticTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 tokenRanges:(id*)arg5;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)urlEncodedString;
- (long long)_caseInsensitiveNumericCompare:(id)arg1;
- (id)cutStringByResolvingAndStandardizingPath;
- (long long)compareVersionString:(id)arg1;
- (bool)roomNameIsProbablyAutomaticallyGenerated;
- (id)stringWithLTREmbedding;
- (id)__stringByStrippingControlCharacters;
- (id)uniqueSavePath;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })__rangeOfNewlineInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_md5Hash;
- (id)_stripPotentialTokenURIWithToken:(id*)arg1;
- (id)_IDFromFZIDType:(long long)arg1;
- (long long)_FZIDType;
- (id)urlFromString;
- (id)stringByAddingURLEscapes;
- (unsigned int)hexValue;
- (id)_FZIDFromEmail;
- (id)_FZIDFromPhoneNumber;
- (id)_URIFromDSID;
- (id)_URIFromEmail;
- (id)_URIFromPhoneNumber;
- (id)_URIFromCanonicalizedDSID;
- (id)_URIFromCanonicalizedEmail;
- (id)_URIFromCanonicalizedPhoneNumber;
- (id)_URIFromCanonicalizedFZIDType:(long long)arg1;
- (id)_URIFromFZIDType:(long long)arg1;
- (id)stringByRemovingURLEscapes;
- (id)trimmedString;
- (id)stringByRemovingCharactersFromSet:(id)arg1;
- (bool)_appearsToBePhoneNumber;
- (id)stringByResolvingAndStandardizingPath;
- (id)_bestGuessURIFromCanicalizedID;
- (id)stringByRemovingWhitespace;
- (id)_bestGuessURI;
- (id)_stripFZIDPrefix;
- (bool)_appearsToBeDSID;
- (long long)localizedCompareToString:(id)arg1;
- (long long)_FZBestGuessFZIDType;
- (bool)isDirectory;
- (id)pathStringForDisplay;
- (id)__stringByStrippingAttachmentAndControlCharacters;
- (bool)_appearsToBeEmail;
- (bool)isEqualToIgnoringCase:(id)arg1;
- (unsigned int)unsignedIntValue;
- (id)_imInitWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)mobileMeDomain;
- (id)stripMobileMSuffixIfPresent;
- (bool)hasMobileMeSuffix;
- (id)stringByEscapingXMLSpecialCharacters;
- (id)_initWithUTF8String:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (bool)_containsHiraganaOrKatakana;
- (void)_enumerateLongCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id)arg2;
- (unsigned int)_firstLongCharacter;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfString:(id)arg1 fromLocation:(unsigned long long)arg2;
- (unsigned long long)_UTF8SizeOfRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)editDistanceFrom:(id)arg1;
- (bool)looksLikeURL;
- (bool)looksLikeNumberInput;
- (bool)looksLikeEmailAddress;
- (bool)isTripledPunctuation;
- (bool)isNewlineOrReturn;
- (bool)isSpaceOrReturn;
- (bool)isSpace;
- (bool)isPlainSpace;
- (bool)isLeftAssociative;
- (bool)endsSentence;
- (id)stringByTrimmingLastCharacter;
- (id)stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet { }*)arg1;
- (id)_stringByConvertingFromFullWidthToHalfWidth;
- (id)_stringByConvertingFromHalfWidthToFullWidth;
- (bool)_shouldBePaddedWithSpaces;
- (bool)_containsFullwidthLettersAndNumbers;
- (bool)_containsFullwidthLettersAndNumbersOnly;
- (bool)_containsCJKSymbolsAndPunctuation;
- (bool)_containsHiraganaKatakanaOrBopomofo;
- (bool)_containsKatakanaOrKanji;
- (bool)_containsHiraganaOnly;
- (bool)_isModifierSymbol;
- (bool)_looksLikeURL;
- (bool)_looksLikeNumberInput;
- (bool)_looksLikeEmailAddress;
- (bool)_isSpace;
- (bool)_isLeftAssociative;
- (bool)_endsSentence;
- (id)_stringByTransliteratingToZhuyin:(bool)arg1;
- (id)_stringByTransliteratingToPinyin:(bool)arg1;
- (bool)_containsCJKScriptsOnly;
- (bool)_isTripledPunctuation;
- (bool)isDelete;
- (bool)isNaturallyRTL;
- (bool)_contentsExclusivelyInCharacterSet:(struct USet { }*)arg1;
- (bool)_containsEmoji;
- (id)_stringByReplacingCharactersInSet:(struct __CFCharacterSet { }*)arg1 withCharacter:(unsigned int)arg2;
- (bool)_containsJapanese;
- (id)_stringByTransliteratingToZhuyin;
- (id)_stringByTranscribingFromLanguage:(id)arg1;
- (bool)_containsIdeographicCharacters;
- (unsigned long long)_editDistanceFrom:(id)arg1;
- (bool)_containsCJScriptsOnly;
- (id)stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfBackwardDeletionClusterAtIndex:(unsigned long long)arg1;
- (id)_stringByApplyingTransform:(id)arg1;
- (id)_stringByTranscribingUsingTokenizer:(struct __CFStringTokenizer { }*)arg1;
- (bool)_containsJapaneseOnly;
- (id)_firstGrapheme;
- (bool)_isSpaceOrReturn;
- (bool)_containsSubstring:(id)arg1;
- (bool)containsSubstring:(id)arg1;
- (unsigned short)_firstChar;
- (id)_stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (bool)_containsCJScripts;
- (unsigned long long)_graphemeCount;
- (bool)_isIdeographicGlyphs;
- (bool)_isDelete;
- (bool)_isNewlineOrReturn;
- (bool)_containsBopomofoToneOnly;
- (bool)_containsBopomofoOnly;
- (id)_lastGrapheme;
- (bool)_isPlainSpace;
- (bool)_isNaturallyRTL;
- (id)_stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet { }*)arg1;
- (id)_stringByTrimmingLastCharacter;
- (id)stringByReplacingCharactersInSet:(struct __CFCharacterSet { }*)arg1 withCharacter:(unsigned int)arg2;
- (id)_stringByTransliteratingToPinyin;
- (id)_stringByTransliteratingToPinyinAsFamilyName;
- (id)_stringByTransliteratingToZhuyinAsFamilyName;
- (bool)_isOnlyIdeographs;
- (id)_stringByDeletingInteriorSentences;
- (id)_stringByTrimmingSuccedingLines;
- (id)_stringByTrimmingPrecedingLines;
- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 withAttributes:(id)arg2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAttributes:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeWithAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeWithSize:(struct CGSize { double x1; double x2; })arg1 attributes:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2 attributes:(id)arg3;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 attributes:(id)arg3;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (id)stringByStrippingLeadingAndTrailingWhitespace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sbs_cgRectValue;
- (bool)hasSuffixInsensitive:(id)arg1;
- (id)MCSHA256DigestWithPasscodeSalt;
- (id)MCOldStyleSafeFilenameHash;
- (id)MCHashedFilenameWithExtension:(id)arg1;
- (unsigned int)MCHash;
- (id)MCOldStyleSafeFilenameHashWithExtension:(id)arg1;
- (id)MCSHA256DigestWithSalt:(id)arg1;
- (id)MCHashedFilenameWithPrefix:(id)arg1 extension:(id)arg2;
- (id)MCAppendDeviceName;
- (id)MCAppendGreenteaSuffix;
- (id)abVCardKoshify;
- (id)abStringByStrippingControlCharacters;
- (id)copyABVCardDataRepresentation;
- (id)abEscapeStringForUnichar:(unsigned short)arg1 and:(unsigned short)arg2 advance:(long long*)arg3;
- (id)abStringByRemovingCharactersFromSet:(id)arg1;
- (id)stringWithIDSFormat;
- (bool)destinationIdIsEmailAddress;
- (bool)destinationIdIsPhoneNumber;
- (bool)_webkit_hasCaseInsensitivePrefix:(id)arg1;
- (id)_webkit_stringByCollapsingWhitespaceCharacters;
- (id)_webkit_stringByCollapsingNonPrintingCharacters;
- (id)_webkit_stringByTrimmingWhitespace;
- (id)_webkit_filenameByFixingIllegalCharacters;
- (bool)_webkit_hasCaseInsensitiveSubstring:(id)arg1;
- (bool)_webkit_hasCaseInsensitiveSuffix:(id)arg1;
- (id)_web_stringByStrippingReturnCharacters;
- (id)_web_stringByAbbreviatingWithTildeInPath;
- (bool)_webkit_isCaseInsensitiveEqualToString:(id)arg1;
- (id)_web_capitalizeRFC822HeaderFieldName;
- (bool)_webkit_looksLikeAbsoluteURL;
- (bool)_web_isUserVisibleURL;
- (id)_webkit_scriptIfJavaScriptURL;
- (id)_webkit_queryKeysAndValues;
- (id)_webkit_URLFragment;
- (id)_web_encodeHostName;
- (id)_web_encodeHostNameWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_web_decodeHostNameWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_web_hostNameNeedsEncodingWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_web_hostNameNeedsDecodingWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_webkit_unescapedQueryValue;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_webkit_rangeOfURLScheme;
- (id)_webkit_stringByReplacingValidPercentEscapes;
- (bool)_webkit_isFTPDirectoryURL;
- (bool)_webkit_isFileURL;
- (bool)_webkit_isJavaScriptURL;
- (id)_web_decodeHostName;
- (id)_web_possibleURLsForUserTypedString;
- (id)_web_possibleURLsForForUserTypedString:(bool)arg1;
- (id)_web_possibleURLPrefixesForUserTypedString;
- (id)_web_bestURLForUserTypedString;
- (id)_initWithUTF8String:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double*)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 withFont:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(bool)arg8;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(bool)arg7;
- (struct CGSize { double x1; double x2; })_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(bool)arg6 truncationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(bool)arg6;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(bool)arg6;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(bool)arg8;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(bool)arg7;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(bool)arg6 truncationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(bool)arg6;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(bool)arg6;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double*)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 withFont:(id)arg2;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (id)stringByStandardizingWhitespace;
- (id)_adjustedFontFromFont:(id)arg1 withinFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimumSize:(double)arg3 textSize:(struct CGSize { double x1; double x2; }*)arg4;
- (struct CGSize { double x1; double x2; })_optimizedSizeWithFont:(id)arg1;
- (id)_uikit_unescapedQueryValue;
- (id)queryKeysAndValues;
- (id)_uikit_stringWithWritingDirection:(long long)arg1 asOverride:(bool)arg2;
- (id)_uikit_stringByTrimmingWhitespaceAndNewlines;
- (void)tryToColorizeWithTokens:(char **)arg1 nbTokens:(unsigned long long)arg2 ptr:(char *)arg3 text:(const char *)arg4 firstCharSet:(id)arg5 secondCharSet:(id)arg6 color:(id)arg7 font:(id)arg8 attributedString:(id)arg9;
- (id)colorizeWithKeywords:(id)arg1 classes:(id)arg2;

@end
