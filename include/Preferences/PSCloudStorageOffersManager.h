/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:07 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Preferences/CommerceRemoteUIDelegateDelegate.h>

@protocol PSCloudStorageOffersManagerDelegate;
@class CommerceRemoteUIDelegate, NSString;

@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate> {

	CommerceRemoteUIDelegate* _commerceDelegate;
	id<PSCloudStorageOffersManagerDelegate> _delegate;
	unsigned long long _requiredStorageThreshold;

}

@property (assign,nonatomic) id<PSCloudStorageOffersManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long requiredStorageThreshold;                          //@synthesize requiredStorageThreshold=_requiredStorageThreshold - In the implementation block
@property (readonly) unsigned long hash;
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginFlowWithNavigationController:(id)arg1 modally:(BOOL)arg2 ;
-(void)cancelLoad;
-(void)setDelegate:(id<PSCloudStorageOffersManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<PSCloudStorageOffersManagerDelegate>)delegate;
-(unsigned long long)requiredStorageThreshold;
-(void)commerceDelegate:(id)arg1 willPresentObjectModel:(id)arg2 page:(id)arg3 ;
-(void)commerceDelegate:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)commerceDelegateDidCancel:(id)arg1 ;
-(void)setRequiredStorageThreshold:(unsigned long long)arg1 ;
@end
