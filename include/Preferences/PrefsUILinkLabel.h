/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:08 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@class NSURL;

@interface PrefsUILinkLabel : UILabel {

	NSURL* _url;
	BOOL _touchingURL;
	NSURL* _URL;
	id _target;
	SEL _action;

}

@property (nonatomic,retain) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)openURL:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)tappedLink:(id)arg1 ;
-(id)color:(id)arg1 byMultiplyingSubComponentsBy:(float)arg2 ;
@end

