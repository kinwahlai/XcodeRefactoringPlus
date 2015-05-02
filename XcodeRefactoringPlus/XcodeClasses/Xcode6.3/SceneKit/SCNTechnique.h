//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNTechnique : NSObject <SCNAnimatable, NSCopying, NSSecureCoding>
{
    id _reserved;
    unsigned int _isPresentationInstance:1;
    struct __C3DFXTechnique *_technique;
    NSMutableDictionary *_valueForSymbol;
    SCNOrderedDictionary *_animations;
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)techniqueWithTechniqueRef:(struct __C3DFXTechnique *)arg1;
+ (id)techniqueBySequencingTechniques:(id)arg1;
+ (id)techniqueWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNTechnique:(id)arg1;
- (void)_customEncodingOfSCNTechnique:(id)arg1;
- (id)presentationInstance;
- (BOOL)isPausedOrPausedByInheritance;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
- (id)animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (void *)__CFObject;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (id)valueForSymbolNamed:(id)arg1;
- (void)setValue:(id)arg1 forSymbolNamed:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (struct __C3DFXTechnique *)techniqueRef;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_symbolsAssignedValues;
- (void)dealloc;
- (id)initWithTechniqueRef:(struct __C3DFXTechnique *)arg1;
- (id)initPresentationTechniqueWithTechniqueRef:(struct __C3DFXTechnique *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end