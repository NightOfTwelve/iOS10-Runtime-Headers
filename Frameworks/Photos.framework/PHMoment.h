/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class NSDate;

@interface PHMoment : PHAssetCollection  {
    short _generationType;
    NSDate *_representativeDate;
}

@property(readonly) NSDate * representativeDate;
@property(readonly) short generationType;

+ (id)identifierCode;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1;
+ (id)managedEntityName;

- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)collectionHasFixedOrder;
- (bool)isMeaningful;
- (id)representativeDate;
- (short)generationType;
- (bool)canShowAvalancheStacks;
- (bool)canPerformEditOperation:(long long)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)localizedTitle;

@end