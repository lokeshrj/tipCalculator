//
//  TipViewController.h
//  tipCalculator
//
//  Created by Lokesh Jagasia on 5/9/14.
//  Copyright (c) 2014 Lokesh Jagasia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TipViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *billAmountField;
@property (weak, nonatomic) IBOutlet UILabel *tipAmountField;
@property (weak, nonatomic) IBOutlet UILabel *totalAmountField;
@property (weak, nonatomic) IBOutlet UISegmentedControl *tipPercentageField;

@end
