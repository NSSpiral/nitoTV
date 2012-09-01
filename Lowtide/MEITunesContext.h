/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <BackRow/BRSingleton.h>
#import "MEITunesContext.h"
#import "Lowtide-Structs.h"
#import "MEVideoByteRangeRequester.h"
#import "MEVideoPlatformFilter.h"
#import "BRUnresolvedMediaProviderHandler.h"

@class NSMutableDictionary;
@protocol MEITunesPlayerMessageHandler;

@interface MEITunesContext : BRSingleton <MEVideoPlatformFilter, MEVideoByteRangeRequester, BRUnresolvedMediaProviderHandler> {
	AppContext* _iTunesContext;
	id<MEITunesPlayerMessageHandler> _playerHandler;
	NSMutableDictionary* _drmSyncInfo;
}
+(void)initialize;
+(void)setSingleton:(id)singleton;
+(id)singleton;
+(AppContext*)iTunesContext;
-(id)init;
-(void)dealloc;
-(id)handleUnresolvedMediaProviderForMediaTypes:(id)mediaTypes;
-(AppContext*)context;
-(void)startDRMSyncForServer:(ATVDataServerRef)server;
-(BOOL)drmSyncInProgressForServer:(ATVDataServerRef)server;
-(void)setPlayerMessageHandler:(id)handler;
-(id)playerMessageHandler;
-(BOOL)platformCanPlayMovie:(void*)movie;
-(void)makeByteRangeRequestForAsset:(id)asset;
-(void)forceCheckInForJournalObject:(id)journalObject;
-(BOOL)attemptAuthorizationForAsset:(id)asset error:(id*)error;
-(void)deauthorizeAssetIfNecessary:(id)necessary;
@end

@interface MEITunesContext (DatabaseModifications)
-(id)_locateMediaProviderForTrackData:(TrackData*)trackData;
-(id)_locateMediaProviderForTrackInfo:(TrackInfo*)trackInfo;
-(id)_locateMediaProviderForAlbumInfo:(AlbumInfo*)albumInfo;
-(id)_locateMediaProviderForPlaylist:(Playlist*)playlist;
-(id)_locateMediaProviderForArtistInfo:(ArtistInfo*)artistInfo;
-(void)_addTrack:(TrackInfo*)track;
-(void)_deleteTrack:(TrackInfo*)track;
-(void)_modifyTrack:(TrackInfo*)track;
-(void)_addAlbum:(AlbumInfo*)album;
-(void)_deleteAlbum:(AlbumInfo*)album;
-(void)_modifyAlbum:(AlbumInfo*)album;
-(void)_addPlaylist:(Playlist*)playlist;
-(void)_modifyPlaylist:(Playlist*)playlist;
-(void)_deletePlaylist:(Playlist*)playlist;
-(void)_addArtist:(ArtistInfo*)artist;
-(void)_modifyArtist:(ArtistInfo*)artist;
-(void)_deleteArtist:(ArtistInfo*)artist;
@end

@interface MEITunesContext (iTunesCleanup)
-(void)_cleanupContext;
@end

@interface MEITunesContext (Private)
-(void)_setStoreFront:(id)front;
-(void)_contentPlaybackInitiated:(id)initiated;
-(void)_contentPlaybackStateChanged:(id)changed;
-(void)_initiateCheckForPurchases:(id)purchases;
-(void)_displayInsufficientITunesVersionDialog:(id)dialog;
-(void)_photoDBRequested:(id)requested;
-(void)_initiateRentalCount:(id)count;
-(void)_incrementDRMSyncCount:(ITITunesInfo)count;
-(void)_decrementDRMSyncCount:(ITITunesInfo)count;
-(void)_checkoutHomeShareRentalDelayed:(id)delayed;
@end

