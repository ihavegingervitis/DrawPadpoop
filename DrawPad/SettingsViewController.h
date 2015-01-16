//
//  SettingsViewController.h
//  DrawPad
//
//  Created by Lindsey Anderson on 1/16/15.
//  Copyright (c) 2015 Lindsey Anderson. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol SettingsViewControllerDelegate <NSObject>
- (void)closeSettings:(id)sender;
@end
@interface SettingsViewController : UIViewController
@property (nonatomic, weak) id<SettingsViewControllerDelegate> delegate;
- (IBAction)closeSettings:(id)sender;
@property (weak, nonatomic) IBOutlet UISlider *brushControl;
@property (weak, nonatomic) IBOutlet UISlider *opacityControl;
@property (weak, nonatomic) IBOutlet UIImageView *brushPreview;
@property (weak, nonatomic) IBOutlet UIImageView *opacityPreview;
@property (weak, nonatomic) IBOutlet UILabel *brushValueLabel;
@property (weak, nonatomic) IBOutlet UILabel *opacityValueLabel;
@property CGFloat brush;
@property CGFloat opacity;
- (IBAction)sliderChanged:(id)sender;
@end
