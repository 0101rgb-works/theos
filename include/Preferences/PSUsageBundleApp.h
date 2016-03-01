/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:08 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class PSWeakReference, NSString, NSArray;

@interface PSUsageBundleApp : NSObject {

	PSWeakReference* _storageReporterReference;
	float _totalSize;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSArray* _categories;

}

@property (nonatomic,retain) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * categories;                                                  //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) float totalSize;                                                       //@synthesize totalSize=_totalSize - In the implementation block
@property (assign,nonatomic) id usageBundleStorageReporter;
+(id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 andCategories:(id)arg3 ;
+(id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(NSArray *)categories;
-(void)setTotalSize:(float)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(void)setUsageBundleStorageReporter:(id)arg1 ;
-(id)usageBundleStorageReporter;
-(float)totalSize;
@end
