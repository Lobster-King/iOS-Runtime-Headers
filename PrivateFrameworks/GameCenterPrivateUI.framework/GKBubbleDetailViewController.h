/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleDetailViewController : GKCenteredContentViewController {
    NSArray *_activeConstraints;
    GKHorizontalBubbleControlsView *_bubblesView;
    GKLabel *_descriptionLabel;
    BOOL _didFloatInBubbles;
    BOOL _didTransition;
    GKLabel *_disabledFunctionalityLabel;
    UIImageView *_iconView;
    NSArray *_landscapeConstraints;
    GKPlayerWithSpeechBalloonView *_playerWithSpeechView;
    NSArray *_portraitConstraints;
    BOOL _showDescriptionView;
    BOOL _showPlayerWithSpeechView;
    GKLabel *_subtitleLabel;
    GKLabel *_titleLabel;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, retain) GKHorizontalBubbleControlsView *bubblesView;
@property (nonatomic, retain) GKLabel *descriptionLabel;
@property (nonatomic) BOOL didFloatInBubbles;
@property (nonatomic) BOOL didTransition;
@property (nonatomic, retain) GKLabel *disabledFunctionalityLabel;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) NSArray *landscapeConstraints;
@property (nonatomic, retain) GKPlayerWithSpeechBalloonView *playerWithSpeechView;
@property (nonatomic, retain) NSArray *portraitConstraints;
@property (nonatomic) BOOL showDescriptionView;
@property (nonatomic) BOOL showPlayerWithSpeechView;
@property (nonatomic, retain) GKLabel *subtitleLabel;
@property (nonatomic, retain) GKLabel *titleLabel;

+ (Class)iconViewClass;

- (void)activateAppropriateConstraints;
- (id)activeConstraints;
- (void)animateOutBubbleWithFocus:(int)arg1 completion:(id /* block */)arg2;
- (id)bubblesView;
- (void)dealloc;
- (id)descriptionLabel;
- (void)didEnterBackground:(id)arg1;
- (BOOL)didFloatInBubbles;
- (BOOL)didTransition;
- (id)disabledFunctionalityLabel;
- (void)floatInBubbles;
- (void)hideBubbles;
- (id)iconView;
- (id)init;
- (id)landscapeConstraints;
- (void)loadView;
- (id)playerWithSpeechView;
- (id)portraitConstraints;
- (void)prepareViewsForAppear;
- (void)prepareViewsForDisappear;
- (void)registerForAppSwitching;
- (void)setActiveConstraints:(id)arg1;
- (void)setBubblesView:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDidFloatInBubbles:(BOOL)arg1;
- (void)setDidTransition:(BOOL)arg1;
- (void)setDisabledFunctionalityLabel:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setLandscapeConstraints:(id)arg1;
- (void)setPlayerWithSpeechView:(id)arg1;
- (void)setPortraitConstraints:(id)arg1;
- (void)setShowDescriptionView:(BOOL)arg1;
- (void)setShowPlayerWithSpeechView:(BOOL)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (BOOL)showDescriptionView;
- (BOOL)showPlayerWithSpeechView;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateAppearingWithBubbleFlow;
- (void)willEnterForeground:(id)arg1;

@end
