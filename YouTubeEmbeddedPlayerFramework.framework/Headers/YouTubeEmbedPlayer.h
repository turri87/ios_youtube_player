@class YouTubeEmbedPlayerFullscreenConfig;
@protocol YouTubeEmbedPlayerEventsDelegate;

NS_ASSUME_NONNULL_BEGIN

@protocol YouTubeEmbedPlayer<NSObject>

/** Ask Embedded Player to setup a video. Embedded Player will renderer a video preview for that
 *  video. Preview contains a background thumbnail and a play button. Once the play button is
 *  clicked, Embedded Player will automatically start playback.
 *  Note: if host app wants to automatically start playback instead of showing a Preview, call
 *  play immediately after the setup.
 *  @param videoID The ID of a YouTube hosted video.
 */
- (void)setVideoWithID:(NSString *)videoID;

/** API for host app to configure the fullscreen behavior. Best practice is to set the fullscreen
 *  config before play is called or before the user taps the play button (e.g. before
 *  setVideoWithID: or immediately after setVideoWithID:). After play is called, setting the
 *  fullscreen config has no effect.
 *  @param fullscreenConfig A YouTubeEmbedPlayerFullscreenConfig object that contains the
 *                          configuration infomation about fullscreen behavior.
 */
- (void)setFullscreenConfig:(YouTubeEmbedPlayerFullscreenConfig *)fullscreenConfig;

/** Ask Embedded Player to playback in fullscreen or not.
 *  Note: only has effect after play is called; if fullscreen config is set to inline mode disabled,
 *  setFullscreen:NO will have no effect.
 */
- (void)setFullscreen:(BOOL)fullscreen;

/** Ask Embedded Player to load and setup video playback. If a video playback is on paused, resume
 *  the playback.
 */
- (void)play;

/** Ask Embedded Player to pause the video playback. */
- (void)pause;

/** Ask Embedded Player to stop the video playback and return to preview. */
- (void)stop;

/** Resetting clears out the videoID, resets player to an empty state, etc. */
- (void)reset;

/** Setup events delegate to receive player events. */
- (void)setEventsDelegate:(nullable id<YouTubeEmbedPlayerEventsDelegate>)eventsDelegate;

/** Returns the duration of the media loaded in the player.
 *  May return 0 if no media is loaded. To guarantee the return of an accurate duration, invoke
 *  this when the playback is in the playing (kYouTubeEmbedPlayerEventTypePlaying) state.
 */
- (NSTimeInterval)getDuration;

@end
NS_ASSUME_NONNULL_END
