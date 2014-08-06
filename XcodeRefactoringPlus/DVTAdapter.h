//
//  DVTAdapter.h
//  XcodeRefactoringPlus
//
//  Created by Kin Wah Lai on 6/8/14.
//  Copyright (c) 2014 KinWah. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DVTAdapter <NSObject>

@end

@interface DVTAdapterImpl : NSObject <DVTAdapter>

@end
