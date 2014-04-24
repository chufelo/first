//
//  firstDetailViewController.h
//  first
//
//  Created by Valeriy Blagovidov on 24.04.14.
//  Copyright (c) 2014 chufelo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface firstDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
