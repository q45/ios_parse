//
//  SignUpViewController.h
//  Ribbit
//
//  Created by Q on 3/9/14.
//  Copyright (c) 2014 Quintin Smith. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface SignUpViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;


- (IBAction)signUp:(id)sender;

@end
