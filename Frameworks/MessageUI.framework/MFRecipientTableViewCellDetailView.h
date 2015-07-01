/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecipientTableViewCellDetailView : UIView <MFTinting> {
    UILabel *_detailLabel;
    BOOL _highlighted;
    BOOL _labelIsHidden;
    UILabel *_labelLabel;
    BOOL _shouldDim;
    UIColor *_tintColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *detailLabel;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL highlighted;
@property (nonatomic, readonly) UILabel *labelLabel;
@property (nonatomic) BOOL shouldDim;
@property (readonly) Class superclass;

+ (id)defaultStringAttributes;
+ (id)groupStringAttributes;
+ (id)highlightedStringAttributes;
+ (id)labelStringAttributes;
+ (float)lineHeight;

- (void)_recalculateLabelColors;
- (void)dealloc;
- (id)detailLabel;
- (BOOL)highlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)labelLabel;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setShouldDim:(BOOL)arg1;
- (void)setTintColor:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldDim;
- (id)tintColor;

@end