//
//  CustomTableViewCell.h
//  CustomTable
//
//  Created by tho dang on 2015-04-15.
//  Copyright (c) 2015 TD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *preptimeLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;

@end
