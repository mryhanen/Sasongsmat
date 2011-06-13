//
//  FoodItemsOverviewController.h
//  Sasongsmat
//
//  Created by Matti Ryhänen on 2011-06-10.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//[

#import <UIKit/UIKit.h>

enum Sections {
    kSeasonSection = 0,
    NUM_SECTIONS
};

enum SeasonSectionRows {
    kFirstSeasonRow = 0,
    NUM_SEASON_SECTION_ROWS
};

@interface FoodItemsOverviewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {
    
    UIView *seasonHeaderView;
    UIView *seasonFooterView;
    
    NSArray *seasonFoodItems;
}

@property (nonatomic, retain) UIView *seasonHeaderView;
@property (nonatomic, retain) UIView *seasonFooterView;

@property (nonatomic, retain) NSArray *seasonFoodItems;

- (void)loadFoodItems;


@end
