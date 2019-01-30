#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol YouTubeEmbedPlayer;

NS_ASSUME_NONNULL_BEGIN

/** Encapsulates the services needed to support player outside of the YouTube app, as well as
 *  serving as a factory for creating player view controllers.
 */
@interface YouTubeEmbedService : NSObject

// Singleton.
+ (YouTubeEmbedService *)sharedInstance;

/** Initialize the YouTubeEmbedService with your application's API key. An API key is a unique
 *  identifier of your project that you generate using the Google Cloud Platform console.
 */
- (void)initializeWithDeveloperKey:(NSString *)developerKey;

/** Factory method for creating a new player view controller. */
- (UIViewController<YouTubeEmbedPlayer> *)createPlayerViewController;

@end

NS_ASSUME_NONNULL_END
