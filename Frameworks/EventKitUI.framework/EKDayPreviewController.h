/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol> {
    NSDate *_date;
    EKDayView *_dayView;
    EKEvent *_event;
    BOOL _hasOverriddenEventDates;
    NSDate *_originalEventEndDate;
    NSDate *_originalEventStartDate;
    NSDate *_overriddenEventEndDate;
    NSDate *_overriddenEventStartDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL presentModally;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (id)initWithDate:(id)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (void)loadView;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end