//
//  Recipe.h
//  CustomTable
//
//  Created by tho dang on 2015-04-21.
//  Copyright (c) 2015 TD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Recipe : NSObject

@property (nonatomic, strong) NSString *name; // name of recipe
@property (nonatomic, strong) NSString *prepTime; // preparation time
@property (nonatomic, strong) NSString *image; // image filename of recipe
@property (nonatomic, strong) NSArray *ingredients; 
@end
