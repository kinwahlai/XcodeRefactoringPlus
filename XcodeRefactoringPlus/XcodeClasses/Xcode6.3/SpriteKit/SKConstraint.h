//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKConstraint : NSObject <NSCoding, NSCopying>
{
    BOOL _enabled;
    SKNode *_referenceNode;
}

+ (id)scaleX:(id)arg1 scaleY:(id)arg2;
+ (id)scaleY:(id)arg1;
+ (id)scaleX:(id)arg1;
+ (id)scale:(id)arg1;
+ (id)width:(id)arg1 height:(id)arg2;
+ (id)height:(id)arg1;
+ (id)width:(id)arg1;
+ (id)orientToPoint:(struct CGPoint)arg1 offset:(id)arg2;
+ (id)orientToNode:(id)arg1 offset:(id)arg2;
+ (id)orientToPoint:(struct CGPoint)arg1 inNode:(id)arg2 offset:(id)arg3;
+ (id)zRotation:(id)arg1;
+ (id)distance:(id)arg1 toPoint:(struct CGPoint)arg2 inNode:(id)arg3;
+ (id)distance:(id)arg1 toPoint:(struct CGPoint)arg2;
+ (id)distance:(id)arg1 toNode:(id)arg2;
+ (id)positionX:(id)arg1 Y:(id)arg2;
+ (id)positionY:(id)arg1;
+ (id)positionX:(id)arg1;
@property(retain) SKNode *referenceNode; // @synthesize referenceNode=_referenceNode;
@property BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end