/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, NSString, <EKEventEditViewDelegate>, EKEventStore;



@interface EKEventEditViewController : UINavigationController 
{
    EKEventStore *_store;
    EKEvent *_event;
    <EKEventEditViewDelegate> *_editViewDelegate;
    NSString *_eventId;
    id _internal;
}

@property(retain) EKEventStore *eventStore;
@property(retain) EKEvent *event;
@property <EKEventEditViewDelegate> *editViewDelegate;

+ (void)setDefaultDatesForEvent:(id)arg1;

- (id)event;
- (void)setEvent:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)dealloc;
- (id)initWithEvent:(id)arg1 store:(id)arg2;
- (id)eventStore;
- (id)editViewDelegate;
- (void)eventEditor:(id)arg1 didCompleteWithAction:(NSInteger)arg2;
- (void)eventEditor:(id)arg1 prepareEventForEdit:(id)arg2;
- (BOOL)saveWithSpan:(NSInteger)arg1 animated:(BOOL)arg2;
- (BOOL)scrollToNotes;
- (void)setScrollToNotes:(BOOL)arg1;
- (void)setEventStore:(id)arg1;
- (void)setEditViewDelegate:(id)arg1;
- (void)completeWithAction:(NSInteger)arg1;
- (void)_storeChanged:(id)arg1;

@end