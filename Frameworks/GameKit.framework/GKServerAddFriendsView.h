/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKButton, GKSectionHeader, UILabel, GKUITheme;

@interface GKServerAddFriendsView : UIView  {
    GKButton *_friendImportButton;
    UILabel *_friendImportHelpLabel;
    GKSectionHeader *_friendImportSectionHeader;
    GKUITheme *_theme;
}

@property(retain) GKUITheme * theme;
@property(retain) GKSectionHeader * friendImportSectionHeader;
@property(retain) GKButton * friendImportButton;
@property(retain) UILabel * friendImportHelpLabel;


- (id)friendImportSectionHeader;
- (id)friendImportHelpLabel;
- (id)friendImportButton;
- (void)setFriendImportHelpLabel:(id)arg1;
- (void)setFriendImportButton:(id)arg1;
- (void)setFriendImportSectionHeader:(id)arg1;
- (id)initWithTheme:(id)arg1;
- (id)theme;
- (void)setTheme:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end