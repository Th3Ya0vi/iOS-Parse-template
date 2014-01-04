//
//  FriendsViewController.h
//  Pic Pong
//
//  Created by Zachary Nagengast on 1/4/14.
//  Copyright (c) 2014 Zauce Tech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
    
@interface FriendsViewController : UITableViewController

@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSArray *friends;

@end
