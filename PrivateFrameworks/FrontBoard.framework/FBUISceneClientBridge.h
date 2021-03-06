/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUISceneClientBridge : NSObject <FBSceneHost, FBUISceneClient> {
    <FBUISceneClientDelegate> *_delegate;
    FBUISceneIdentity *_identity;
    <FBSceneClient> *_legacyClient;
    <FBUISceneHostProxy> *_sceneHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) FBSDisplay *display;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) FBUISceneIdentity *identity;
@property (retain) <FBSceneClient> *legacyClient;
@property <FBUISceneHostProxy> *sceneHost;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;
@property (readonly) Class superclass;

- (void)client:(id)arg1 attachLayer:(id)arg2;
- (void)client:(id)arg1 detachLayer:(id)arg2;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)client:(id)arg1 updateLayer:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didInvalidateSceneHost:(id)arg1;
- (id)display;
- (id)identifier;
- (id)identity;
- (id)initWithSceneIdentity:(id)arg1 legacyClient:(id)arg2;
- (id)legacyClient;
- (void)registerWithDelegate:(id)arg1;
- (id)sceneHost;
- (void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)sceneHost:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (void)sceneHost:(id)arg1 registerWithInitialParameters:(id)arg2;
- (id)sceneIdentifier;
- (void)setLegacyClient:(id)arg1;
- (void)setSceneHost:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
