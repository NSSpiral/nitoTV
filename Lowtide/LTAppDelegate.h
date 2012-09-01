/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "LTAppDelegate.h"

@class LTController;

@interface LTAppDelegate : NSObject {
	LTController* _controller;
	BOOL _ignorePlayPauseEvents;
}
-(void)applicationDidFinishLaunching:(id)application;
-(void)dealloc;
-(void)completeNormalApplicationDidFinishLaunching;
-(BOOL)ignorePlayPauseEvents;
-(void)setIgnorePlayPauseEvents:(BOOL)events;
@end

@interface LTAppDelegate (Private)
-(void)_postMediaHostBootstrap;
-(void)_registerAccountTypes;
-(void)_registerAirTunesPlayer;
-(void)_createOnTheGoPlaylist;
-(void)_createGeniusPlaylist;
-(void)_registerParentalControls;
-(void)_registerHomeShareManager;
-(void)_checkNetworkTime;
-(void)_timeChangeNotification:(id)notification;
@end

