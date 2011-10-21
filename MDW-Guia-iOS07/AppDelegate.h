//
//  AppDelegate.h
//  MDW-Guia-iOS07
//
//  Created by Javier Cala Uribe on 19/10/11.
//  Copyright (c) 2011 *. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FBConnect.h"

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate,FBSessionDelegate>
{
    Facebook    *facebook;
}


@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) ViewController *viewController;
@property (nonatomic, retain) Facebook  *facebook;

@end
