/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:08 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView;

@interface PSSoftwareUpdateAnimatedIcon : UIView {

	UIImageView* _innerGearView;
	UIImageView* _outerGearShadowView;
	UIImageView* _outerGearView;
	BOOL _animating;

}

@property (nonatomic,readonly) UIImageView * innerGearView; 
@property (nonatomic,readonly) UIImageView * outerGearShadowView; 
@property (nonatomic,readonly) UIImageView * outerGearView; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAnimating:(BOOL)arg1 ;
-(UIImageView *)innerGearView;
-(UIImageView *)outerGearShadowView;
-(UIImageView *)outerGearView;
@end

