//
//  com_giantrobotlabsAppDelegate.h
//  FitBuddy Gym Pass
//
//  Created by john.neyer on 3/7/14.
//  Copyright (c) 2014 John Neyer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GymPassViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property GymPassViewController *gymPassViewController;

+ (AppDelegate *)sharedAppDelegate;


@end
