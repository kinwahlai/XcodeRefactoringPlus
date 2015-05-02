//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SCNCameraJSExport <JSExport>
+ (id)camera;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) double aperture;
@property(nonatomic) double focalBlurRadius;
@property(nonatomic) double focalSize;
@property(nonatomic) double focalDistance;
@property(nonatomic) double orthographicScale;
@property(nonatomic) BOOL usesOrthographicProjection;
@property(nonatomic) BOOL automaticallyAdjustsZRange;
@property(nonatomic) double zFar;
@property(nonatomic) double zNear;
@property(nonatomic) double yFov;
@property(nonatomic) double xFov;
@property(copy, nonatomic) NSString *name;
- (id)copy;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (void)setProjectionTransform:(struct CATransform3D)arg1;
- (struct CATransform3D)projectionTransform;
@end