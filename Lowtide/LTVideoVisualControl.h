/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <BackRow/BRControl.h>

@class AVPlayerLayer;

@interface LTVideoVisualControl : BRControl {
	AVPlayerLayer* _output;
}
-(id)initWithPlayer:(id)player;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)layoutSubcontrols;
@end

