/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicQueryDataSource : MPUCompletionQueryDataSource

- (void)_defaultsDidChangeNotification:(id)arg1;
- (id)_queryForNowPlayingComparisonAtIndex:(unsigned int)arg1;
- (BOOL)_updateQueryPredicatesAndOrdering;
- (void)dealloc;
- (id)entityCountFormat;
- (BOOL)entityIsNowPlayingAtIndex:(unsigned int)arg1;
- (id)initWithQuery:(id)arg1 entityType:(int)arg2;
- (id)playbackContextForIndex:(unsigned int)arg1;
- (BOOL)queryIsNowPlayingAtIndex:(unsigned int)arg1;

@end
