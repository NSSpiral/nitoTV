/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRController.h"

@class BRHeaderControl, NSString, BRPairingPinControl, BRTextControl;

@interface BRPairingController : BRController {
@private
	BRHeaderControl *_header;	// 56 = 0x38
	BRPairingPinControl *_pinControl;	// 60 = 0x3c
	BRTextControl *_requirementText;	// 64 = 0x40
	NSString *_pin;	// 68 = 0x44
	NSString *_startNotificationName;	// 72 = 0x48
	NSString *_stopNotificationName;	// 76 = 0x4c
	BOOL _pairingHappenedWhileBuried;	// 80 = 0x50
}
+ (id)iTunesPairingControllerForChangingSyncHost;	// 0x31646c2d
+ (id)iTunesPairingControllerForInitialSync;	// 0x31646edd
+ (id)iTunesPairingControllerForStreaming;	// 0x31646afd
+ (id)iTunesPairingControllerForSync;	// 0x31646dad
- (CGRect)_centeredMenuHeaderFrameForMasterFrame:(CGRect)masterFrame;	// 0x31646905
- (id)_generatePairingPINWithNumDigits:(int)numDigits;	// 0x316478c5
- (id)_initWithType:(int)type;	// 0x3164700d
- (void)_setCancelText:(id)text;	// 0x316477f9
- (void)_setPrimaryInfoText:(id)text;	// 0x3164777d
- (void)_setRequirementsText:(id)text;	// 0x3164787d
- (void)_setStartNotificationName:(id)name;	// 0x316469a9
- (void)_setStopNotificationName:(id)name;	// 0x31646971
- (void)_setTitle:(id)title;	// 0x31646add
- (void)_syncStatusChangedNotification:(id)notification;	// 0x316469e1
- (BOOL)brEventAction:(id)action;	// 0x31647185
- (void)dealloc;	// 0x31647441
- (void)layoutSubcontrols;	// 0x316474f9
- (void)wasExhumed;	// 0x31647265
- (void)wasPopped;	// 0x316472cd
- (void)wasPushed;	// 0x316473a1
@end

