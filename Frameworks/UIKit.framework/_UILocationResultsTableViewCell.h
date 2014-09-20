/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIImage, UILabel, NSLayoutConstraint, UIView;

@interface _UILocationResultsTableViewCell : UITableViewCell  {
    long long _locationImageType;
    UIImage *_customLocationImage;
    UILabel *_searchTextLabel;
    UILabel *_searchDetailTextLabel;
    UIImageView *_searchImageView;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_interLabelSpaceConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    UIView *_cellHeightStrut;
    double _additionalLeftSidePadding;
}

@property long long locationImageType;
@property(copy) UIImage * customLocationImage;
@property(retain) UILabel * searchTextLabel;
@property(retain) UILabel * searchDetailTextLabel;
@property(retain) UIImageView * searchImageView;
@property(retain) NSLayoutConstraint * topMarginConstraint;
@property(retain) NSLayoutConstraint * interLabelSpaceConstraint;
@property(retain) NSLayoutConstraint * bottomMarginConstraint;
@property(retain) UIView * cellHeightStrut;
@property double additionalLeftSidePadding;


- (void)setAdditionalLeftSidePadding:(double)arg1;
- (double)additionalLeftSidePadding;
- (void)setCellHeightStrut:(id)arg1;
- (id)cellHeightStrut;
- (id)bottomMarginConstraint;
- (id)interLabelSpaceConstraint;
- (id)topMarginConstraint;
- (void)setSearchImageView:(id)arg1;
- (id)searchImageView;
- (void)setSearchDetailTextLabel:(id)arg1;
- (id)searchDetailTextLabel;
- (void)setSearchTextLabel:(id)arg1;
- (id)searchTextLabel;
- (id)customLocationImage;
- (void)setCustomLocationImage:(id)arg1;
- (void)setLocationImageType:(long long)arg1;
- (void)_updateLabelFontsAndConstraints;
- (void)setInterLabelSpaceConstraint:(id)arg1;
- (double)_subtitleCellInterLabelSpace;
- (double)_subtitleCellBottomMargin;
- (void)_applyLeftAndRightAlignmentConstraints:(id)arg1;
- (double)_subtitleCellTopMargin;
- (void)setBottomMarginConstraint:(id)arg1;
- (double)_defaultCellBottomMargin;
- (void)setTopMarginConstraint:(id)arg1;
- (double)_defaultCellTopMargin;
- (long long)locationImageType;
- (id)_searchImageView;
- (id)imageView;
- (id)detailTextLabel;
- (id)textLabel;
- (void)prepareForReuse;
- (id)contentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end
