/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:07 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Preferences/PINEntryView.h>

@protocol PSPINEntryViewDelegate;
@class UILabel, FailureBarView, UIButton, NSString;

@interface PINView : UIView <PINEntryView> {

	UILabel* _titleLabel;
	UILabel* _errorTitleLabel;
	FailureBarView* _failureView;
	UILabel* _pinPolicyLabel;
	BOOL _error;
	UIButton* _optionsButton;
	id<PSPINEntryViewDelegate> _delegate;
	/*^block*/id _passcodeOptionsHandler;

}

@property (assign,nonatomic) id<PSPINEntryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id passcodeOptionsHandler;                                 //@synthesize passcodeOptionsHandler=_passcodeOptionsHandler - In the implementation block
@property (readonly) unsigned long hash;
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PSPINEntryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<PSPINEntryViewDelegate>)delegate;
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1 ;
-(void)showFailedAttempts:(long long)arg1 ;
-(void)hideFailedAttempts;
-(void)hideError;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2 ;
-(void)setPasscodeOptionsHandler:(id)arg1 ;
-(id)passcodeOptionsHandler;
-(id)optionsButton;
-(void)optionsButtonTapped;
-(void)setTextFieldKeyboardType:(long long)arg1 ;
-(void)setTextFieldKeyboardAppearance:(long long)arg1 ;
-(void)showError:(id)arg1 animate:(BOOL)arg2 ;
-(void)setTitle:(id)arg1 font:(id)arg2 ;
-(void)hidePasscodeField:(BOOL)arg1 ;
-(void)setShowsOptionsButton:(BOOL)arg1 ;
-(void)notifyDelegatePINChanged;
-(void)notifyDelegatePINEntered;
@end

