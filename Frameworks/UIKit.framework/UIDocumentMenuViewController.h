/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentMenuViewController : UIViewController <UIAlertControllerContaining, _UIDocumentPickerRemoteViewControllerContaining> {
    UIAlertController *_alertController;
    NSMutableArray *_auxiliaryOptions;
    BOOL _dismissDelegateCalled;
    unsigned int _documentPickerMode;
    _UIDocumentPickerRemoteViewController *_remoteViewController;
    NSURL *_uploadURL;
    <UIDocumentMenuDelegate> *_weak_delegate;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic, retain) NSMutableArray *auxiliaryOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDocumentMenuDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissDelegateCalled;
@property (nonatomic) unsigned int documentPickerMode;
@property (readonly) unsigned int hash;
@property (getter=_remoteViewController, setter=_setRemoteViewController:, nonatomic, retain) _UIDocumentPickerRemoteViewController *remoteViewController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *uploadURL;

- (void)_commonInitWithCompletion:(id /* block */)arg1;
- (id)_containedAlertController;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissWithOption:(id)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)_remoteViewController;
- (BOOL)_requiresCustomPresentationController;
- (void)_setRemoteViewController:(id)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)addOptionWithTitle:(id)arg1 image:(id)arg2 order:(unsigned int)arg3 handler:(id /* block */)arg4;
- (id)alertController;
- (id)auxiliaryOptions;
- (void)dealloc;
- (id)delegate;
- (BOOL)dismissDelegateCalled;
- (unsigned int)documentPickerMode;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned int)arg2;
- (id)initWithURL:(id)arg1 inMode:(unsigned int)arg2;
- (void)loadView;
- (int)modalPresentationStyle;
- (void)setAlertController:(id)arg1;
- (void)setAuxiliaryOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissDelegateCalled:(BOOL)arg1;
- (void)setDocumentPickerMode:(unsigned int)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (void)setUploadURL:(id)arg1;
- (id)uploadURL;
- (void)viewWillAppear:(BOOL)arg1;

@end