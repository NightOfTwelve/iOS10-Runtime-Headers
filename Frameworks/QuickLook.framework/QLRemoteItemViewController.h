/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLRemoteItemViewController : QLItemViewController <QLPrintingProtocol> {
    NSLayoutConstraint * _bottomConstraint;
    NSExtension * _extension;
    bool  _fullScreen;
    NSDictionary * _hostConfiguration;
    <QLPrintingProtocol> * _printer;
    _UIRemoteViewController * _remoteViewController;
    id  _request;
    QLRemotePreviewHostContext * _serviceContext;
    NSLayoutConstraint * _topConstraint;
    bool  _visible;
}

- (void).cxx_destruct;
- (bool)canEnterFullScreen;
- (bool)canSwipeToDismiss;
- (void)dealloc;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)numberOfPagesWithSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)previewWillFinishAppearing;
- (id)printer;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
