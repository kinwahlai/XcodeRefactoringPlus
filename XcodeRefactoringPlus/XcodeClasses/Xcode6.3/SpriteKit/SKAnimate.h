//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKAnimate : SKAction
{
    struct SKCAnimate *_mycaction;
    NSArray *_textures;
}

+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4;
- (void).cxx_destruct;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double timePerFrame;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end