/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCryptoInfoInternal : NSObject <TSPCryptoInfo> {
    NSArray *_blockInfos;
    SFUCryptoKey *_cryptoKey;
    unsigned long _decodedLength;
    unsigned long _preferredBlockSize;
}

@property (nonatomic, retain) NSArray *blockInfos;
@property (nonatomic, readonly) SFUCryptoKey *cryptoKey;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long decodedLength;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned long preferredBlockSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)blockInfos;
- (id)cryptoKey;
- (unsigned long)decodedLength;
- (id)initWithCryptoInfo:(id)arg1;
- (id)initWithCryptoKey:(id)arg1 preferredBlockSize:(unsigned long)arg2 blockInfos:(id)arg3 decodedLength:(unsigned long)arg4;
- (id)mutableCryptoInfoCopy;
- (unsigned long)preferredBlockSize;
- (void)setBlockInfos:(id)arg1;
- (void)setDecodedLength:(unsigned long)arg1;

@end