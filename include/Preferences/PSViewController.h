/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:07 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Preferences/PSController.h>

@protocol PSController;
@class UIViewController, PSRootController, PSSpecifier, NSString;

@interface PSViewController : UIViewController <PSController> {

	UIViewController<PSController> * _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;

}

@property (readonly) unsigned long hash;
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setParentController:(id)arg1 ;
-(id)parentController;
-(BOOL)canBeShownFromSuspendedState;
-(void)suspend;
-(id)specifier;
-(void)setSpecifier:(id)arg1 ;
-(id)rootController;
-(void)formSheetViewWillDisappear;
-(void)popupViewWillDisappear;
-(void)setRootController:(id)arg1 ;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)pushController:(id)arg1 ;
-(void)popupViewDidDisappear;
-(void)formSheetViewDidDisappear;
@end
