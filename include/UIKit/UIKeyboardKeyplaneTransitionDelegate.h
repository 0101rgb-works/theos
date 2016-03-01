
@protocol UIKeyboardKeyplaneTransitionDelegate
@required
-(void)transitionDidFinish:(BOOL)arg1;
-(void)prepareForTransition;
-(void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
-(void)finishTransitionWithCompletion:(/*^block*/id)arg1;

@end

