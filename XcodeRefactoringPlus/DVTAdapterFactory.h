//
//  DVTAdapterFactory.h
//  XcodeRefactoringPlus
//
//  Created by Kin Wah Lai on 6/8/14.
//  Copyright (c) 2014 KinWah. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DVTAdapter.h"

@protocol DVTAdapterFactory <NSObject>
-(id<DVTAdapter>)makeAdapter;
@end

@interface DVTAdapterFactoryImpl : NSObject <DVTAdapterFactory>
-(id<DVTAdapter>)makeAdapter;
@end
