/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SALocation, NSString, SACalendar;

@interface SATransportationScheduleStop : AceObject <SAAceSerializable> {
}

@property(retain) SACalendar * arrivalDate;
@property(retain) SACalendar * departureDate;
@property(retain) SALocation * location;
@property(copy) NSString * medium;
@property(copy) NSString * notes;
@property(copy) NSString * serviceLevel;

+ (id)scheduleStopWithDictionary:(id)arg1 context:(id)arg2;
+ (id)scheduleStop;

- (void)setArrivalDate:(id)arg1;
- (void)setDepartureDate:(id)arg1;
- (void)setServiceLevel:(id)arg1;
- (id)serviceLevel;
- (void)setMedium:(id)arg1;
- (id)medium;
- (id)encodedClassName;
- (void)setNotes:(id)arg1;
- (id)notes;
- (id)arrivalDate;
- (id)departureDate;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)groupIdentifier;

@end