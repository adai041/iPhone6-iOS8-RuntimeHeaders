/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel;

@interface UIDatePickerContentView : UIView  {
    struct { 
        unsigned int isAmPm : 1; 
    } _datePickerContentViewFlags;
    bool_isModern;
    UILabel *_titleLabel;
    double _titleLabelMaxX;
    long long _titleAlignment;
}

@property(readonly) UILabel * titleLabel;
@property double titleLabelMaxX;
@property bool isAmPm;
@property long long titleAlignment;
@property bool isModern;


- (void)setIsModern:(bool)arg1;
- (bool)isModern;
- (long long)titleAlignment;
- (double)titleLabelMaxX;
- (void)setTitleAlignment:(long long)arg1;
- (void)setTitleLabelMaxX:(double)arg1;
- (void)setIsAmPm:(bool)arg1;
- (bool)isAmPm;
- (id)titleLabel;
- (bool)_canBeReusedInPickerView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
