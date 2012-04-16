//
//  MDSAppDelegate.h
//  MDSGeocoderViewController
//
//  Created by Ryan Johnson on 4/16/12.
//  Copyright (c) 2012 mobile data solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MDSGeocodingViewController;

@interface MDSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) MDSGeocodingViewController *viewController;

@end
