//
//  PlayerViewController.m
//  TestPlayer
//
//  Created by Adrian Prieto on 8/3/18.
//  Copyright © 2018 Adrian Prieto. All rights reserved.
//


#import "PlayerViewController.h"

@implementation PlayerViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString *videoId = @"Qds6cxR4Inw";
    NSDictionary *playerVars = @{@"origin" : @"https://www.adrianprieto.com"};
    
    [self.playerView loadWithVideoId:videoId playerVars:playerVars];
}


- (IBAction)buttonPressed:(id)sender {
    if (sender == self.playButton) {
        [self.playerView playVideo];
    } else if (sender == self.pauseButton) {
        [self.playerView pauseVideo];
    } else if (sender == self.stopButton) {
        [self.playerView stopVideo];
    }
}

@end
