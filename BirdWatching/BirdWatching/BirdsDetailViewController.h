//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by Thean Siew Soon on 4/30/13.
//  Copyright (c) 2013 Thean Siew Soon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BirdsDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
