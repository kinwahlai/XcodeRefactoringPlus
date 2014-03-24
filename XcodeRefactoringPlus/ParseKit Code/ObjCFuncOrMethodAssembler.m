//
//  ObjCFuncOrMethodAssembler.m
//  ParseKitTryOut
//
//  Created by developer on 3/24/14.
//  Copyright (c) 2014 KinWah. All rights reserved.
//

#import "ObjCFuncOrMethodAssembler.h"
#import "ObjCFuncOrMethodParser.h"
#import <ParseKit/ParseKit.h>

@implementation ObjCFuncOrMethodAssembler
{
    NSInteger _squareParenCount;
    NSInteger _parenCount;
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        _squareParenCount = 0;
        _parenCount = 0;
    }
    return self;
}

-(void)parser:(ObjCFuncOrMethodParser*) parser didMatchOpenSquareParen:(PKAssembly *)a
{
    _squareParenCount++;
}

-(void)parser:(ObjCFuncOrMethodParser*) parser didMatchCloseSquareParen:(PKAssembly *)a
{
    _squareParenCount--;
}

-(void)parser:(ObjCFuncOrMethodParser*) parser didMatchOpenParen:(PKAssembly *)a
{
    _parenCount++;
}

-(void)parser:(ObjCFuncOrMethodParser*) parser didMatchCloseParen:(PKAssembly *)a
{
    _parenCount--;
}

-(BOOL)isRangeAValidFuncOrMethod
{
    return _squareParenCount == 0 && _parenCount == 0;
}
@end
