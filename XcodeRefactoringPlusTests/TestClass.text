@interface TestClass : NSObject

@end

@implementation TestClass

-(void) foo
{
    // we want to extract inline [NSString stringWithFormat:] into local variable
    NSString *barbar = @"";
    [barbar stringByAppendingString:[NSString stringWithFormat:@"%d",1234]];
}

-(void)acceptARange:(NSRange)range {};

-(void) bar
{
    // we want to extract inline NSMakeRange(0,0) into local variable
    [self acceptARange:NSMakeRange(0, 0)];
}

-(void) foobarbar
{
    // we want to make barbar inline
    NSString *barbar = [NSString stringWithFormat:@"%d",1234];
    NSString *foobar = @"";
    [foobar stringByAppendingString:barbar];
}
@end
