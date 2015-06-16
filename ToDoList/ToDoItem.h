//
//  ToDoItem.h
//  ToDoList
//
//  Created by Vincent Leung on 15/6/16.
//  Copyright (c) 2015年 hyleong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;

@property BOOL completed;

@property (readonly) NSData *createDate;

@end
