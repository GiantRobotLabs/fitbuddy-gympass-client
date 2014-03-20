//
//  PassPreview.h
//  GymPass
//
//  Created by john.neyer on 3/20/14.
//  Copyright (c) 2014 John Neyer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PassPreview : UIView

@property (weak, nonatomic) IBOutlet UILabel *memberNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *memberIdLabel;
@property (weak, nonatomic) IBOutlet UIImageView *barcodeImage;

@property (weak, nonatomic) IBOutlet UILabel *barcodeCodeLabel;

@end
