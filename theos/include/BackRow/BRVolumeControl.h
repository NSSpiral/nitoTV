/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRPercentageIndicatorLayer;

__attribute__((visibility("hidden")))
@interface BRVolumeControl : BRControl {
@private
	BRImageControl *_speakerOnLayer;	// 40 = 0x28
	BRImageControl *_speakerOffLayer;	// 44 = 0x2c
	BRPercentageIndicatorLayer *_percentageIndicatorLayer;	// 48 = 0x30
}
@property(assign) float volume;	// G=0x31613791; S=0x316137c5; converted property
- (id)init;	// 0x3161393d
- (void)dealloc;	// 0x316138d1
- (void)layoutSubcontrols;	// 0x31613bb9
// converted property setter: - (void)setVolume:(float)volume;	// 0x316137c5
// converted property getter: - (float)volume;	// 0x31613791
@end

