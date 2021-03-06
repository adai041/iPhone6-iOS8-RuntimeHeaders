/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSRunStorage, NSTextContainer, NSMutableArray, NSLayoutManagerTextBlockRowArrayCache;

@interface NSExtraLMData : NSObject  {
    NSRunStorage *_attachmentSizesRun;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _currentAttachmentRect;
    unsigned long long _currentAttachmentIndex;
    id _fillHoleLock;
    NSRunStorage *_fragmentRunsExtras;
    id _temporaryAttributes;
    NSTextContainer *_firstTextContainer;
    struct __CFDictionary { } *_textContainerIndexes;
    struct __CFDictionary { } *_textContainerGlyphIndexes;
    long long _typesetterBehavior;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _cachedFontBounds;
    double _cachedUnderlineThickness;
    double _cachedUnderlinePosition;
    double _cachedUnderlineAdjustment;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _cachedUnderlineRange;
    NSMutableArray *_blockRunsArray;
    double _hyphenationFactor;
    NSMutableArray *_insertionPointCache;
    struct _NSGlyphTree { 
        struct _NSGlyphNode {} *rootNode; 
        struct _NSGlyphNode {} *curNode; 
        unsigned long long curCharIndex; 
        unsigned long long curGlyphIndex; 
    } _glyphTree;
    struct _NSLayoutTree { 
        struct _NSLayoutNode {} *rootNode; 
        struct _NSLayoutNode {} *curNode; 
        unsigned long long curGlyphIndex; 
        double curLongitudinalOrigin; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } extraLineFragmentRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } extraLineFragmentUsedRect; 
        unsigned long long glyphsPerLineEstimate; 
        double offsetPerLineEstimate; 
    } _layoutTree;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _firstTextViewVisibleCharRange;
    struct CGSize { 
        double width; 
        double height; 
    } _firstTextViewVisibleOffset;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _lastInvalidatedCharRange;
    double _lastInvalidatedLongitudinalPosition;
    NSTextContainer *_lastInvalidatedTextContainer;
    NSLayoutManagerTextBlockRowArrayCache *_rowArrayCache;
    struct __lmFlags2 { 
        unsigned int glyphCause : 6; 
        unsigned int layoutCause : 6; 
        unsigned int delegateRespondsToTempAttrs : 1; 
        unsigned int processingFirstTextViewVisible : 1; 
        unsigned int temporarySpacingChange : 1; 
        unsigned int alwaysDrawsActive : 1; 
        unsigned int usesOldShowPackedGlyphs : 1; 
        unsigned int drawsUnderlinesLikeWebKit : 1; 
        unsigned int drawsDebugBaselines : 1; 
        unsigned int reserved : 13; 
    } _lmFlags2;
}



@end
