/*
 Copyright (C) 2014 Apple Inc. All Rights Reserved.






 */

#import <UIKit/UIKit.h>

@class AAPLImageFilter;

@protocol AAPLFilterViewControllerDelegate;

@interface AAPLFilterViewController : UIViewController

@property (nonatomic, strong) AAPLImageFilter *filter;
@property (nonatomic, weak) IBOutlet UISlider *slider;
@property (nonatomic, weak) IBOutlet UISwitch *activeSwitch;
@property (nonatomic, weak) IBOutlet UINavigationBar *navigationBar;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView *activityIndicator;

@property (nonatomic, weak) id <AAPLFilterViewControllerDelegate> delegate;

@end

@protocol AAPLFilterViewControllerDelegate <NSObject>

- (void)wasDismissed;

@end