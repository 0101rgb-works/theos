/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:08 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface PSRestrictionsPasscodeController : NSObject
+(BOOL)validatePIN:(id)arg1 ;
+(void)setPIN:(id)arg1 ;
+(id)_keychainPasswordForRestrictions;
+(void)_removeKeychainPasswordForRestrictions;
+(id)_restrictionPasswordDictionary;
+(id)_generateSalt;
+(id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2 ;
+(void)setPasswordForRestrictions:(id)arg1 ;
+(void)removePasswordForRestrictions;
+(id)passwordForRestrictions;
+(BOOL)legacyRestrictionsInEffect;
+(void)migrateRestrictionsPasscode;
+(id)saltForRestrictions;
+(BOOL)settingEnabled;
@end

