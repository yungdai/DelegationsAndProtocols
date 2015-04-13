//
//  ViewController.h
//  DelegationsAndProtocols
//
//  Created by Yung Dai on 2015-04-13.
//  Copyright (c) 2015 Yung Dai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@interface ViewController : UIViewController<TaskDelegate>

@property (strong) NSString* name;
@property (strong) NSMutableArray* listOFTasks;

-(void)generateReport;

@end

