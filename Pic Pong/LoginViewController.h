//
//  LoginViewController.h
//  Pic Pong
//
//  Created by Zachary Nagengast on 1/3/14.
//  Copyright (c) 2014 Zauce Tech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;

- (IBAction)login:(id)sender;

@end
