/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesMediaAsset.h"
#import "BRMediaAssetFacade.h"
#import "BRTransientPlaybackRange.h"

@protocol BRMediaAsset;

@interface MEMediaAssetWithTransientPlaybackRange : MEITunesMediaAsset <BRTransientPlaybackRange, BRMediaAssetFacade> {
	id<BRMediaAsset> _originalAsset;
	unsigned _startTimeInMS;
	unsigned _stopTimeInMS;
	unsigned _startChpIdx;
	unsigned _stopChpIdx;
}
-(void)dealloc;
-(unsigned)startChapter;
-(unsigned)stopChapter;
-(unsigned)stopTimeInMS;
-(unsigned)startTimeInMS;
-(void)setStartTimeInMS:(unsigned)ms;
-(void)setStopTimeInMS:(unsigned)ms;
@end

