/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSPackageSignatureGenerator : NSObject {
    void *_generator;
    BOOL _valid;
}

@property (nonatomic) void*generator;
@property (getter=isValid, nonatomic) BOOL valid;

- (char *)_finishGenerator;
- (id)dataByFinishingSignature;
- (void)dealloc;
- (void*)generator;
- (id)init;
- (BOOL)isValid;
- (void)setGenerator:(void*)arg1;
- (void)setValid:(BOOL)arg1;
- (void)updateWithData:(id)arg1;

@end