/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSControlPromptUpdateRequest : HSRequest  {
    unsigned int _promptID;
}

+ (id)requestWithInterfaceID:(unsigned int)arg1 promptID:(unsigned int)arg2;

- (id)initWithInterfaceID:(unsigned int)arg1 promptID:(unsigned int)arg2;
- (id)canonicalResponseForResponse:(id)arg1;
- (double)timeoutInterval;
- (BOOL)isConcurrent;

@end