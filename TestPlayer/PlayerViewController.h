//
//  PlayerViewController.h
//  TestPlayer
//
//  Created by Adrian Prieto on 8/3/18.
//  Copyright © 2018 Adrian Prieto. All rights reserved.
//

#ifndef PlayerViewController_h
#define PlayerViewController_h
#endif /* PlayerViewController_h */

#import "YTPlayerView.h"

@interface PlayerViewController : UIViewController<YTPlayerViewDelegate>

@property(nonatomic, strong) IBOutlet YTPlayerView *playerView;
@property(nonatomic, weak) IBOutlet UIButton *playButton;
@property(nonatomic, weak) IBOutlet UIButton *pauseButton;
@property(nonatomic, weak) IBOutlet UIButton *stopButton;

@end
