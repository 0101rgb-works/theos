/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:07 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Preferences/PSKeychainSyncTextEntryController.h>
#import <UIKit/UIAlertView.h>

@class UIButton, NSString, PSKeychainSyncManager;

@interface KeychainSyncSMSVerificationController : PSKeychainSyncTextEntryController <UIAlertViewDelegate> {

	UIButton* _footerButton;
	NSString* _phoneNumber;
	NSString* _dialingPrefix;
	NSString* _countryCode;
	PSKeychainSyncManager* _keychainSyncManager;

}

@property (nonatomic,retain) NSString * phoneNumber;                                          //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * dialingPrefix;                                        //@synthesize dialingPrefix=_dialingPrefix - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                                          //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) PSKeychainSyncManager * keychainSyncManager;              //@synthesize keychainSyncManager=_keychainSyncManager - In the implementation block
@property (readonly) unsigned long hash;
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(id)init;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(NSString *)phoneNumber;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setDialingPrefix:(NSString *)arg1 ;
-(NSString *)dialingPrefix;
-(void)dismissAlerts;
-(void)setKeychainSyncManager:(PSKeychainSyncManager *)arg1 ;
-(void)showSupportVerification;
-(PSKeychainSyncManager *)keychainSyncManager;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end
