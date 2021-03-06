/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface _MCDBrowsableContentTableViewPreloader : NSObject <MCDBrowsableContentModelListener> {
    BOOL _cancelled;
    id /* block */ _cancelledBlock;
    NSIndexPath *_indexPath;
    MCDBrowsableContentModel *_model;
    UINavigationController *_navigationController;
    BOOL _pushContainerWhenNil;
    BOOL _pushNowPlayingWhenNil;
    UIViewController *_sourceViewController;
}

@property (getter=isCancelled, nonatomic) BOOL cancelled;
@property (nonatomic, readonly, copy) id /* block */ cancelledBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) MCDBrowsableContentModel *model;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) UIViewController *sourceViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deregister;
- (id /* block */)cancelledBlock;
- (void)dealloc;
- (id)indexPath;
- (id)initWithModel:(id)arg1 indexPath:(id)arg2 sourceViewController:(id)arg3 navigationController:(id)arg4 cancelledBlock:(id /* block */)arg5;
- (BOOL)isCancelled;
- (void)loadAndPush;
- (id)model;
- (void)model:(id)arg1 didInitiatePlaybackOfItemAtIndexPath:(id)arg2 error:(id)arg3;
- (void)model:(id)arg1 didUpdateContainerAtIndexPath:(id)arg2;
- (void)model:(id)arg1 didUpdateContentItemsAtIndexPaths:(id)arg2;
- (id)navigationController;
- (void)setCancelled:(BOOL)arg1;
- (id)sourceViewController;

@end
