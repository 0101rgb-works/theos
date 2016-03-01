/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:07 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

//#import <Preferences/Preferences-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebView.h>

@class UIWebView, NSData, NSString;

@interface PSWebContainerView : UIView <UIWebViewDelegate> {

	UIWebView* _webView;
	NSData* _content;

}

@property (nonatomic,readonly) UIWebView * webView;                 //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSData * content;                      //@synthesize content=_content - In the implementation block
@property (readonly) unsigned long hash;
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)heightForWidth:(double)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(UIWebView *)webView;
-(void)setUserStyleSheet:(id)arg1 ;
-(NSData *)content;
-(BOOL)uiWebView:(id)arg1 previewIsAllowedForPosition:(CGPoint)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)setContent:(NSData *)arg1 ;
@end

