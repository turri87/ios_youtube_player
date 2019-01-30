#import <Foundation/Foundation.h>

@interface YouTubeEmbedPlayerFullscreenConfig : NSObject

/** If YES, inline mode will be disabled for the player and there will not be an enter/exit
 *  fullscreen button. All playbacks will be in fullscreen mode. Tapping the "X" button will close
 *  the fullscreen player and return to preview mode.
 */
@property(nonatomic) BOOL inlineModeDisabled;

@end
