/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesMediaAsset.h"
#import "BRMediaAssetFacade.h"

@class BRRSSMediaAsset;

@interface MEITunesMediaAssetFacade : MEITunesMediaAsset <BRMediaAssetFacade> {
	BRRSSMediaAsset* _mediaAsset;
}
-(id)initWithMediaAsset:(id)mediaAsset;
-(void)dealloc;
-(void)willBeDeleted;
-(id)mediaType;
-(id)title;
-(id)artist;
-(id)primaryCollectionTitle;
-(BOOL)hasCoverArt;
-(id)coverArt;
-(id)coverArtForBookmarkTimeInMS:(unsigned)ms;
-(id)coverArtID;
-(void)setHasBeenPlayed:(BOOL)played;
-(void)setBookmarkTimeInMS:(unsigned)ms;
-(unsigned)bookmarkTimeInMS;
-(void)skip;
-(void)incrementPerformanceCount;
-(void)incrementPerformanceOrSkipCount:(unsigned)count;
-(long)performanceCount;
-(BOOL)hasVideoContent;
-(id)resolution;
-(BOOL)isExplicit;
-(BOOL)closedCaptioned;
-(BOOL)isWidescreen;
-(BOOL)dolbyDigital;
-(id)assetID;
@end

