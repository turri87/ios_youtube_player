//
//  YouTubeEmbeddedPlayerFramework.h
//  YouTube Embedded Player SDK for iOS.
//
//  Copyright 2005-2017 Google Inc. All rights reserved.

#import <CoreData/CoreData.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_9_0
#error The YouTube Embedded Player SDK requires a deployment target of iOS 9.0 or later.
#endif

// Header files.

#import <YouTubeEmbeddedPlayerFramework/YouTubeEmbedService.h>
#import <YouTubeEmbeddedPlayerFramework/YouTubeEmbedPlayer.h>
#import <YouTubeEmbeddedPlayerFramework/YouTubeEmbedPlayerFullscreenConfig.h>
#import <YouTubeEmbeddedPlayerFramework/YouTubeEmbedPlayerEvent.h>
