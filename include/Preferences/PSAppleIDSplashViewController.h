/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:07 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class AKAppleIDAuthenticationController, UIImageView, UIActivityIndicatorView, UIBarButtonItem, ABMonogrammer, PSSpecifier, NSString, NSTimer;

@interface PSAppleIDSplashViewController : PSListController {

	AKAppleIDAuthenticationController* _authController;
	UIImageView* _silhouetteView;
	UIActivityIndicatorView* _spinner;
	UIBarButtonItem* _spinnerBarItem;
	UIBarButtonItem* _nextButtonBarItem;
	UIBarButtonItem* _cancelButtonBarItem;
	ABMonogrammer* _monogrammer;
	PSSpecifier* _createNewAccountButtonSpecifier;
	PSSpecifier* _signInButtonSpecifier;
	NSString* _username;
	NSString* _password;
	id _textFieldTextDidChangeObserver;
	BOOL _isPasswordDirty;
	BOOL _shouldHideBackButton;
	void* _powerAssertion;
	NSTimer* _idleJiggleTimer;
	BOOL _isPresentedModally;
	BOOL _shouldShowCreateAppleIDButton;

}

@property (assign,setter=setPresentedModally:,nonatomic) BOOL isPresentedModally;                         //@synthesize isPresentedModally=_isPresentedModally - In the implementation block
@property (nonatomic,readonly) AKAppleIDAuthenticationController * authenticationController; 
@property (assign,nonatomic) BOOL shouldShowCreateAppleIDButton;                                          //@synthesize shouldShowCreateAppleIDButton=_shouldShowCreateAppleIDButton - In the implementation block
-(id)serviceName;
-(id)specifiers;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)title;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_idleTimerFired;
-(BOOL)isPresentedModally;
-(void)returnPressedAtEnd;
-(id)_specifierForGroupWithiForgotLink;
-(id)_specifiersForLoginForm;
-(id)_specifiersForSignInButton;
-(id)_specifiersForCreateNewAccount;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_usernameForSpecifier:(id)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_passwordForSpecifier:(id)arg1 ;
-(void)_signInButtonWasTapped:(id)arg1 ;
-(BOOL)_runningInMail;
-(void)_presentAppleIDPrivacyInformationPane;
-(void)_createNewAppleIDButtonWasTapped:(id)arg1 ;
-(void)_iForgotButtonWasTapped:(id)arg1 ;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(id)_monogrammer;
-(void)_updateSignInButton;
-(double)_heightForCreateNewAccountFooterWithWidth:(double)arg1 ;
-(void)willBeginAuthWithContext:(id)arg1 ;
-(AKAppleIDAuthenticationController *)authenticationController;
-(void)didFinishAuthWithContext:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(void)showBusyUI;
-(void)handleAuthCompletionWithResults:(id)arg1 ;
-(void)hideBusyUI;
-(void)_openWebBasedCredentialRecoveryFlow;
-(void)_signInWithUsername:(id)arg1 password:(id)arg2 ;
-(void)createNewAppleIDWithCompletion:(/*^block*/id)arg1 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_preventSleepAndDimming;
-(void)_allowSleepAndDimming;
-(void)_presentInvalidUsernameAlert;
-(id)serviceDescription;
-(id)serviceIcon;
-(BOOL)_shouldShowCancelDone;
-(void)setPresentedModally:(BOOL)arg1 ;
-(BOOL)shouldShowCreateAppleIDButton;
-(void)setShouldShowCreateAppleIDButton:(BOOL)arg1 ;
@end

