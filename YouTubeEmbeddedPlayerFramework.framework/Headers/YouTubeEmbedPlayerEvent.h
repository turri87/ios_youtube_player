typedef NS_ENUM(NSInteger, YouTubeEmbedPlayerEventType) {
  kYouTubeEmbedPlayerEventTypeUnknown = 0,

  /** A YouTube video was requested. */
  kYouTubeEmbedPlayerEventTypeStarted,

  /** This YouTubeEmbedPlayer is not using a media player. */
  kYouTubeEmbedPlayerEventTypeStopped,

  /** The YouTube video is in progress. */
  kYouTubeEmbedPlayerEventTypePlaying,

  /**
   * The YouTube video is no longer progressing. The YouTubeEmbedPlayer may still be playing media
   * such as ads.
   */
  kYouTubeEmbedPlayerEventTypeSuspended,

  /** The YouTubeEmbedPlayer has entered fullscreen mode */
  kYouTubeEmbedPlayerEventTypeEnterFullscreen,

  /** The YouTubeEmbedPlayer has exited fullscreen mode */
  kYouTubeEmbedPlayerEventTypeExitFullscreen
};

@protocol YouTubeEmbedPlayerEvent<NSObject>

@property(nonatomic, readonly) YouTubeEmbedPlayerEventType eventType;
@property(nonatomic, readonly) NSString *videoID;
@property(nonatomic, readonly) NSTimeInterval mediaTime;

@end

@protocol YouTubeEmbedPlayer;

@protocol YouTubeEmbedPlayerEventsDelegate<NSObject>

- (void)player:(id<YouTubeEmbedPlayer>)player
    didReceivePlayerEvent:(id<YouTubeEmbedPlayerEvent>)playerEvent;

@end
