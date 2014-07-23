/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSOrderedSet, NSString;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer> {
    bool_adjustingChildOrderKeys;
    bool_needsPersistenceUpdate;
}

@property(retain) NSOrderedSet * childCollections;
@property bool needsPersistenceUpdate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) unsigned long long containersCount;
@property(readonly) unsigned long long albumsCount;
@property(readonly) bool isFolder;
@property(copy,readonly) id albumsSortingComparator;
@property(readonly) int filter;
@property(readonly) unsigned long long unreadAlbumsCount;
@property(retain,readonly) NSString * _prettyDescription;
@property(retain,readonly) NSString * _typeDescription;

+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;

- (void)refreshCollections;
- (void)removeChildCollections:(id)arg1;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)removeChildCollectionsObject:(id)arg1;
- (void)addChildCollectionsObject:(id)arg1;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2;
- (void)_handleChildOrderKeys;
- (bool)_childOrderKeysAreValid;
- (void)addChildCollections:(id)arg1;
- (unsigned long long)unreadAlbumsCount;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (bool)needsReordering;
- (void)setNeedsReordering;
- (bool)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (id)albumsSortingComparator;
- (bool)canEditAlbums;
- (bool)hasAtLeastOneAlbum;
- (short)albumListType;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (bool)canEditContainers;
- (id)_prettyDescription;
- (id)childKeyForOrdering;
- (id)sortedOrderKeysForChildrenUsingMap:(id)arg1;
- (id)childToOrderKeyMap;
- (unsigned long long)albumsCount;
- (bool)needsPersistenceUpdate;
- (void)setNeedsPersistenceUpdate:(bool)arg1;
- (void)removePersistedFileSystemData;
- (bool)isValidKindForPersistence;
- (id)newOrderKeyChild:(id)arg1;
- (void)persistMetadataToFileSystem;
- (unsigned long long)videosCount;
- (unsigned long long)assetsCount;
- (unsigned long long)approximateCount;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (id)mutableAssets;
- (id)albums;
- (unsigned long long)photosCount;
- (id)assets;
- (id)containers;
- (void)didSave;
- (void)willSave;
- (void)prepareForDeletion;
- (id)identifier;
- (id)_typeDescription;
- (int)filter;
- (bool)isEmpty;
- (unsigned long long)count;

@end