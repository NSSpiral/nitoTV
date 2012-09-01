/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"

@class BRControl;

@interface BRWindow : NSObject {
@private
	BRControl *_content;	// 4 = 0x4
	BRControl *_plane;	// 8 = 0x8
	int _level;	// 12 = 0xc
	BOOL _orderedIn;	// 16 = 0x10
	BOOL _opaque;	// 17 = 0x11
}
@property(assign) BOOL acceptsFocus;	// G=0x3158dbd1; S=0x315d4809; converted property
@property(retain) BRControl *content;	// G=0x315a5f3d; S=0x3158d805; converted property
@property(assign) BOOL isOpaque;	// G=0x3158d9d1; S=0x315bbc69; converted property
@property(assign) int level;	// G=0x3158d9c1; S=0x315a5991; converted property
@property(readonly, assign, getter=isOrderedIn) BOOL orderedIn;	// G=0x315d4275; converted property
+ (BOOL)dispatchEvent:(id)event;	// 0x315d47b5
+ (id)focusedLeafControl;	// 0x315d4789
+ (void)initialize;	// 0x315d49fd
+ (CGRect)interfaceFrame;	// 0x315d4d55
+ (CGSize)maxBounds;	// 0x315d4261
+ (id)rootLayer;	// 0x315d47e9
+ (void)setMaxBounds:(CGSize)bounds;	// 0x315d4d75
+ (id)window;	// 0x315a5b05
+ (id)windowList;	// 0x315d4285
- (id)init;	// 0x3158d535
- (void)_addWindow:(id)window atIndex:(long)index;	// 0x315d444d
- (id)_controlPlane;	// 0x315d4291
- (void)_orderWindow:(id)window above:(id)above;	// 0x315d44ed
- (void)_orderWindow:(id)window below:(id)below;	// 0x315d4585
- (void)_orderWindowBack:(id)back;	// 0x315d461d
- (void)_orderWindowFront:(id)front;	// 0x315d46a9
- (void)_orderWindowOut:(id)anOut;	// 0x315d4735
- (void)_updateContent;	// 0x315d4941
- (void)_updateRenderedWindows;	// 0x315d42a1
// converted property getter: - (BOOL)acceptsFocus;	// 0x3158dbd1
// converted property getter: - (id)content;	// 0x315a5f3d
- (void)dealloc;	// 0x315a16c9
// converted property getter: - (BOOL)isOpaque;	// 0x3158d9d1
// converted property getter: - (BOOL)isOrderedIn;	// 0x315d4275
// converted property getter: - (int)level;	// 0x3158d9c1
- (void)orderAbove:(id)above;	// 0x315d482d
- (void)orderBack;	// 0x315d489d
- (void)orderBelow:(id)below;	// 0x315d4865
- (void)orderFront;	// 0x3158d8d5
- (void)orderOut;	// 0x315a143d
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x315d4809
// converted property setter: - (void)setContent:(id)content;	// 0x3158d805
// converted property setter: - (void)setIsOpaque:(BOOL)opaque;	// 0x315bbc69
// converted property setter: - (void)setLevel:(int)level;	// 0x315a5991
@end

