/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:07 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol PSSearchIndexOperationDelegate <PSSpecifierObserver>
@optional
-(void)searchIndexOperationDidCancel:(id)arg1;

@required
-(void)searchIndexOperation:(id)arg1 didFindSpecifierDataSource:(id)arg2;
-(void)searchIndexOperationDidFinish:(id)arg1 searchEntries:(id)arg2;

@end

