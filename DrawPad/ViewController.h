//
//  ViewController.h
//  DrawPad
//
//  Created by Lindsey Anderson on 1/16/15.
//  Copyright (c) 2015 Lindsey Anderson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SettingsViewController.h"

@interface ViewController : UIViewController <SettingsViewControllerDelegate> {
    
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
    
}

@end

