//
//  DVTAdapterFactory.h
//  XcodeRefactoringPlus
//
//  Created by Kin Wah Lai on 6/8/14.
//  Copyright (c) 2014 KinWah. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DVTAdapter.h"

@class DVTSourceTextView;

@protocol DVTAdapterFactory <NSObject>
-(DVTAdapter*)makeAdapterWithCodeEditor:(DVTSourceTextView*)codeEditor;
@end

@interface DVTAdapterFactoryImpl : NSObject <DVTAdapterFactory>
-(DVTAdapter*)makeAdapterWithCodeEditor:(DVTSourceTextView*)codeEditor;
@end
