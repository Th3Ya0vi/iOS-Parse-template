//
//  EditFriendsViewController.h
//  Pic Pong
//
//  Created by Zachary Nagengast on 1/4/14.
//  Copyright (c) 2014 Zauce Tech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface EditFriendsViewController : UITableViewController

@property (nonatomic, strong) NSArray *allUsers;
@property (nonatomic, strong) PFUser *currentUser;
@property (nonatomic, strong) NSMutableArray *friends;

- (BOOL)isFriend:(PFUser *)user;

@end