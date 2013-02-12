/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class <IUGeniusGridViewDelegate>, NSArray, NSMutableArray, NSString, UIImageView, UILabel, UIView;

@interface IUGeniusGridView : UIView {
    UILabel *_artistsLabel;
    NSMutableArray *_coverViews;
    UIView *_coversViewContainer;
    <IUGeniusGridViewDelegate> *_delegate;
    struct CGImage { } *_image;
    int _orientation;
    UIImageView *_playImageView;
    NSArray *_representativeArtists;
    BOOL _showsPlayButton;
    NSString *_title;
    UILabel *_titleLabel;
}

@property(readonly) UIView * coversViewContainer;
@property <IUGeniusGridViewDelegate> * delegate;
@property(readonly) double durationForFlip;
@property struct CGImage { }* image;
@property(readonly) int orientation;
@property(retain) NSArray * representativeArtists;
@property BOOL showsPlayButton;
@property(copy) NSString * title;

+ (float)coverImageSideLength;

- (void)_addFlipAnimationToLayer:(id)arg1 withBeginTime:(double)arg2 forwards:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_gridFrame;
- (unsigned int)_gridSize;
- (void)_invalidateLayout;
- (id)_playButtonImage;
- (void)_removeAllAnimations;
- (void)_setCoverImages;
- (void)_statusBarHeightDidChange:(id)arg1;
- (void)_updateArtistsLabelForStatusBarHeightChange;
- (id)coversViewContainer;
- (void)dealloc;
- (id)delegate;
- (double)durationForFlip;
- (void)flipToOrientation:(int)arg1 animated:(BOOL)arg2;
- (struct CGImage { }*)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)orientation;
- (void)prepareForReuse;
- (id)representativeArtists;
- (void)setDelegate:(id)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setRepresentativeArtists:(id)arg1;
- (void)setShowsPlayButton:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)showsPlayButton;
- (id)title;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewDidUnload;

@end