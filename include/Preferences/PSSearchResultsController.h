/*
* This header is generated by classdump-dyld 0.7
* on Thursday, January 14, 2016 at 3:32:08 AM Eastern European Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableView.h>

@protocol PSSearchResultsControllerDelegate;
@class UITableView, NSMutableDictionary, NSMutableArray, PSSearchResults, NSString;

@interface PSSearchResultsController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSMutableDictionary* _iconViewMap;
	NSMutableArray* _reusableIconViews;
	PSSearchResults* _searchResults;
	id<PSSearchResultsControllerDelegate> _delegate;

}

@property (nonatomic,retain) PSSearchResults * searchResults;                                    //@synthesize searchResults=_searchResults - In the implementation block
@property (assign,nonatomic) id<PSSearchResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long hash;
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PSSearchResultsControllerDelegate>)arg1 ;
-(void)reloadData;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<PSSearchResultsControllerDelegate>)delegate;
-(void)loadView;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)setSearchResults:(PSSearchResults *)arg1 ;
-(PSSearchResults *)searchResults;
-(BOOL)_shouldShowSwitchForSearchEntry:(id)arg1 ;
-(void)_removeIconViewForSection:(id)arg1 ;
-(void)_updateIconViews:(BOOL)arg1 ;
@end

