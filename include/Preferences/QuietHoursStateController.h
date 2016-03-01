/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:08 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray, NSDateComponents, BBSettingsGateway;

@interface QuietHoursStateController : NSObject {

	unsigned long long _mode;
	NSArray* _overrides;
	unsigned long long _privilegeTypes;
	int _recordID;
	NSDateComponents* _fromComponents;
	NSDateComponents* _toComponents;
	BBSettingsGateway* _bbGateway;
	unsigned long long _overrideType;
	BOOL _valid;
	BOOL _isEffectiveWhileUnlocked;
	NSArray* _behaviorOverrides;
	long long _overrideStatus;

}

@property (assign,nonatomic) BOOL valid;                                     //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSArray * behaviorOverrides;                      //@synthesize behaviorOverrides=_behaviorOverrides - In the implementation block
@property (nonatomic,copy) NSArray * overrides;                              //@synthesize overrides=_overrides - In the implementation block
@property (assign,nonatomic) BOOL isEffectiveWhileUnlocked;                  //@synthesize isEffectiveWhileUnlocked=_isEffectiveWhileUnlocked - In the implementation block
@property (assign,nonatomic) unsigned long long privilegeTypes;              //@synthesize privilegeTypes=_privilegeTypes - In the implementation block
@property (assign,nonatomic) int recordID;                                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSDateComponents * fromComponents;              //@synthesize fromComponents=_fromComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * toComponents;                //@synthesize toComponents=_toComponents - In the implementation block
@property (nonatomic,readonly) BBSettingsGateway * bbGateway;                //@synthesize bbGateway=_bbGateway - In the implementation block
@property (assign,nonatomic) unsigned long long overrideType;                //@synthesize overrideType=_overrideType - In the implementation block
@property (assign,nonatomic) long long overrideStatus;                       //@synthesize overrideStatus=_overrideStatus - In the implementation block
+(id)sharedController;
+(BOOL)isDNDScheduled;
+(void)setManualEnabled:(BOOL)arg1 ;
+(void)setScheduledEnabled:(BOOL)arg1 ;
+(void)setScheduledRangeFrom:(id)arg1 to:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)setRecordID:(int)arg1 ;
-(int)recordID;
-(BBSettingsGateway *)bbGateway;
-(void)setOverrides:(NSArray *)arg1 ;
-(NSDateComponents *)fromComponents;
-(NSDateComponents *)toComponents;
-(NSArray *)overrides;
-(void)setOverrideStatus:(long long)arg1 ;
-(void)setFromComponents:(NSDateComponents *)arg1 ;
-(void)setToComponents:(NSDateComponents *)arg1 ;
-(unsigned long long)privilegeTypes;
-(unsigned long long)overrideType;
-(long long)overrideStatus;
-(void)setPrivilegeTypes:(unsigned long long)arg1 ;
-(void)resetToFallbackRange;
-(BOOL)repeatedCalls;
-(BOOL)manualModeEnabled;
-(void)setRepeatedCalls:(BOOL)arg1 ;
-(unsigned long long)allowedGroupType;
-(int)userSelectedGroupID;
-(void)setAllowedGroup:(id)arg1 recordID:(int)arg2 groupName:(id)arg3 ;
-(NSArray *)behaviorOverrides;
-(void)setBehaviorOverrides:(NSArray *)arg1 ;
-(BOOL)isEffectiveWhileUnlocked;
-(void)setIsEffectiveWhileUnlocked:(BOOL)arg1 ;
-(void)setOverrideType:(unsigned long long)arg1 ;
@end

