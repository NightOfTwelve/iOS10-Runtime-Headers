/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <BSWatchdogDelegate>, BSTimer, NSObject<OS_dispatch_queue>, NSDate, <BSWatchdogProviding>;

@interface BSWatchdog : NSObject  {
    <BSWatchdogDelegate> *_delegate;
    <BSWatchdogProviding> *_provider;
    NSObject<OS_dispatch_queue> *_queue;
    double _timeout;
    BSTimer *_timer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    NSDate *_startDate;
    bool_invalidated;
    bool_completed;
    bool_hasFired;
}

@property(retain) <BSWatchdogDelegate> * delegate;
@property(retain,readonly) <BSWatchdogProviding> * provider;
@property(retain,readonly) NSObject<OS_dispatch_queue> * queue;
@property(readonly) double timeout;
@property(retain,readonly) NSDate * startDate;
@property(getter=hasFired,readonly) bool fired;


- (double)timeout;
- (id)startDate;
- (bool)hasFired;
- (id)provider;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2;
- (id)initWithProvider:(id)arg1 queue:(id)arg2;
- (void)_watchdogTimerFired;
- (void)_stageTwoTimerFired;
- (void)_setupTimerWithInterval:(double)arg1 handler:(id)arg2;
- (void)_stageOneTimerFired;
- (void)_invalidateTimer;
- (void)_completeWatchdogAfterFiring:(bool)arg1;
- (void)_startWatchdogTimer;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(id)arg3;
- (id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (void)start;
- (id)delegate;
- (void)dealloc;
- (id)description;

@end