/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, _UIDocumentPickerContainerModel;

@interface _UIDocumentPickerDocumentTableContainerCell : _UIDocumentPickerDocumentTableCell  {
    _UIDocumentPickerContainerModel *_model;
    id _observerToken;
    UIImageView *_containerIconView;
}

@property(retain) _UIDocumentPickerContainerModel * model;
@property(retain) id observerToken;
@property(retain) UIImageView * containerIconView;


- (void)setContainerIconView:(id)arg1;
- (id)containerIconView;
- (void)setObserverToken:(id)arg1;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (id)observerToken;
- (void)setModel:(id)arg1;
- (void)reloadItem:(bool)arg1;
- (id)model;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
