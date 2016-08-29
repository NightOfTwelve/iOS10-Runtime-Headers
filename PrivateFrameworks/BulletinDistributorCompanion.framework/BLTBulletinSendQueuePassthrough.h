/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTBulletinSendQueuePassthrough : NSObject {
    <BLTBulletinSendQueueDelegate> * _delegate;
}

@property (nonatomic) <BLTBulletinSendQueueDelegate> *delegate;

- (void).cxx_destruct;
- (void)_sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(bool)arg4 attachmentURL:(id)arg5 attachmentKey:(id)arg6 didSend:(id /* block */)arg7 didQueue:(id /* block */)arg8;
- (id)delegate;
- (void)handleFileURL:(id)arg1;
- (void)queuePending;
- (void)sendNow;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(id /* block */)arg3 didQueue:(id /* block */)arg4;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(bool)arg4 attachmentURL:(id)arg5 attachmentKey:(id)arg6 didSend:(id /* block */)arg7;
- (void)setDelegate:(id)arg1;

@end