//
//  DetailViewController.h
//  CustomTable
//
//  Created by tho dang on 2015-04-16.
//  Copyright (c) 2015 TD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"

@interface DetailViewController : UIViewController


@property (strong, nonatomic) IBOutlet UIImageView *recipeImageView;
@property (strong, nonatomic) IBOutlet UILabel *prepTimeLabel;
@property (strong, nonatomic) IBOutlet UITextView *ingredientsTextView;
@property (nonatomic, strong) Recipe *recipe;

@end
