/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraBadgeView : UIView {
    UIVisualEffectView * _blurEffectView;
    UILabel * _label;
    NSArray * _labelConstraints;
    unsigned long long  _size;
    NSArray * _staticConstraints;
    unsigned long long  _style;
    UIVisualEffectView * _vibrancyEffectView;
}

@property (nonatomic, readonly) UIVisualEffectView *blurEffectView;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, retain) NSArray *labelConstraints;
@property (nonatomic, copy) NSString *labelText;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, retain) NSArray *staticConstraints;
@property (nonatomic) unsigned long long style;
@property (nonatomic, readonly) UIVisualEffectView *vibrancyEffectView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_applyStyle;
- (id)blurEffectView;
- (id)initWithSize:(unsigned long long)arg1;
- (id)label;
- (id)labelConstraints;
- (id)labelText;
- (void)setLabelConstraints:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setStaticConstraints:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)size;
- (id)staticConstraints;
- (unsigned long long)style;
- (void)updateConstraints;
- (id)vibrancyEffectView;

@end