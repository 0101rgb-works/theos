/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:07 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UILabel;

@interface PSKeychainSyncHeaderView : UIView <PSHeaderFooterView> {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	BOOL _usesCompactLayout;

}

@property (assign,nonatomic) BOOL usesCompactLayout;              //@synthesize usesCompactLayout=_usesCompactLayout - In the implementation block
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setDetailText:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitleText:(id)arg1 ;
-(void)setUsesCompactLayout:(BOOL)arg1 ;
-(BOOL)usesCompactLayout;
@end
