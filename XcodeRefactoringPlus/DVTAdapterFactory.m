//
//  DVTAdapterFactory.m
//  XcodeRefactoringPlus
//
//  Created by Kin Wah Lai on 6/8/14.
//  Copyright (c) 2014 KinWah. All rights reserved.
//

#import "DVTAdapterFactory.h"

@implementation DVTAdapterFactoryImpl
-(id<DVTAdapter>)makeAdapter
{
    return [[DVTAdapterImpl alloc] init];
}
@end
