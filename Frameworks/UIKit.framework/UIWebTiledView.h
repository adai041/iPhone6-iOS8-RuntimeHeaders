/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class WAKWindow;

@interface UIWebTiledView : UIView  {
    WAKWindow *_wakWindow;
    int _inGestureType;
    int _tilingArea;
    bool_didFirstTileLayout;
    bool_layoutTilesInMainThread;
    bool_tilingModeIsLocked;
    bool_allowsPaintingAndScriptsWhilePanning;
    bool_editingTilingModeEnabled;
}


- (id)wakWindow;
- (bool)layoutTilesInMainThread;
- (bool)tileDrawingEnabled;
- (bool)editingTilingModeEnabled;
- (void)setTileDrawingEnabled:(bool)arg1;
- (bool)logsTilingChanges;
- (void)setLogsTilingChanges:(bool)arg1;
- (bool)isTilingEnabled;
- (unsigned int)adjustedMaxTileCount;
- (unsigned int)maxTileCount;
- (bool)drawsGrid;
- (void)setDrawsGrid:(bool)arg1;
- (struct CGSize { double x1; double x2; })tileSize;
- (void)setAllowsPaintingAndScriptsWhilePanning:(bool)arg1;
- (bool)allowsPaintingAndScriptsWhilePanning;
- (void)unlockTilingMode;
- (void)lockTilingMode;
- (void)drawImageIntoTiles:(struct CGImage { }*)arg1;
- (void)layoutTilesNowOnWebThread;
- (void)setWAKWindow:(id)arg1;
- (void)dumpTiles;
- (bool)keepsZoomedOutTiles;
- (void)setKeepsZoomedOutTiles:(bool)arg1;
- (bool)tilesOpaque;
- (void)updateTilingMode;
- (void)layoutTilesNowForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_screenChanged:(id)arg1;
- (void)_updateForScreen:(id)arg1;
- (int)tilingArea;
- (void)setInGesture:(int)arg1;
- (void)removeForegroundTiles;
- (void)removeAllTiles;
- (void)setTilesOpaque:(bool)arg1;
- (void)setTilingArea:(int)arg1;
- (void)removeAllNonVisibleTiles;
- (void)setEditingTilingModeEnabled:(bool)arg1;
- (void)layoutTilesNow;
- (void)setLayoutTilesInMainThread:(bool)arg1;
- (void)setTilingEnabled:(bool)arg1;
- (void)setMaxTileCount:(unsigned int)arg1;
- (void)setTileSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)_didScroll;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
