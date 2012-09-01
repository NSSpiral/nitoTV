/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesMediaAsset.h"
#import "MEITunesInternetRadioStationAsset.h"
#import "Lowtide-Structs.h"

@class NSString;
@protocol BRMediaCollection;

@interface MEITunesInternetRadioStationAsset : MEITunesMediaAsset {
	id<BRMediaCollection> _genreCollection;
	unsigned short _bitRate;
	NSString* _streamTitle;
	NSString* _streamURL;
	NSString* _streamMessage;
	double _lastPlayed;
}
+(id)radioStationFromMediaProvider:(id)mediaProvider withTrackInfo:(TrackInfo*)trackInfo withGenreCollection:(id)genreCollection;
-(id)initWithMediaProvider:(id)mediaProvider trackInfo:(TrackInfo*)info;
-(id)initWithMediaProvider:(id)mediaProvider withTrackInfo:(TrackInfo*)trackInfo withGenreCollection:(id)genreCollection;
-(void)dealloc;
-(void)updateStreamInfo:(ITStreamInfo*)info;
-(id)artist;
-(id)mediaSummary;
-(id)primaryCollection;
-(id)assetID;
-(id)imageProxy;
-(id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;
-(id)mediaType;
-(id)lastPlayed;
-(void)setLastPlayed:(id)played;
@end

@interface MEITunesInternetRadioStationAsset (Private)
-(void)_loadLastPlayedPersistentValue;
-(void)_setLastPlayedPersistentValue:(id)value;
@end

