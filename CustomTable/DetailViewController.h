//
//  DetailViewController.h
//  CustomTable
//
//  Created by tho dang on 2015-04-16.
//  Copyright (c) 2015 TD. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface DetailViewController : UIViewController

@property(nonatomic, strong) IBOutlet UILabel *recipeLabel;
@property(nonatomic,strong) NSString *recipeName;

@end
