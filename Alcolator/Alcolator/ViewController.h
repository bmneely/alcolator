//
//  ViewController.h
//  Alcolator
//
//  Created by Ben Neely on 5/14/15.
//  Copyright (c) 2015 Ben Neely. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
- (float)calculateGlasses:(int) numberOfBeers;
- (void)buttonPressed:(UIButton *)sender;
@end

