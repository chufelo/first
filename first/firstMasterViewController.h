//
//  firstMasterViewController.h
//  first
//
//  Created by Valeriy Blagovidov on 24.04.14.
//  Copyright (c) 2014 chufelo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class firstDetailViewController;

@interface firstMasterViewController : UITableViewController

@property (strong, nonatomic) firstDetailViewController *detailViewController;

@end
