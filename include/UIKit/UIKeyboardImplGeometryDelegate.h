@protocol UIKeyboardImplGeometryDelegate
@property (assign,getter=isMinimized,nonatomic) BOOL minimized; 
@required
-(BOOL)isActive;
-(BOOL)isMinimized;
-(BOOL)shouldSaveMinimizationState;
-(void)setMinimized:(BOOL)arg1;
-(BOOL)isAutomatic;
-(BOOL)canDismiss;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2;

@end
