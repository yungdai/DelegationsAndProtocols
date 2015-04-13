//
//  Task.h
//  DelegationsAndProtocols
//
//  Created by Yung Dai on 2015-04-13.
//  Copyright (c) 2015 Yung Dai. All rights reserved.
//

#import <Foundation/Foundation.h>


// Forwad Declaration of the Task Class
@class Task;

// Implimentation of the task delegate protocol
@protocol TaskDelegate <NSObject>


@optional
// optional simpleTask delegate method
-(void)simpleTask:(NSString *)theOptionalTask;

@required
// anything in the required area is required to impliment this task delegate protocol
-(void)requiredTask:(NSString *)theRequiredTask;

@end

@interface Task : NSObject
// assign is used to a strong reference to the delegate object
@property (assign) id<TaskDelegate> delegate;

-(void) generateReport;
@end
