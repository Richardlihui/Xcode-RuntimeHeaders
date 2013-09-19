/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKEffectNode.h>

@class NSColor, NSMutableDictionary, PKPhysicsWorld, SKPhysicsWorld, SKView;

@interface SKScene : SKEffectNode
{
    double _lastUpdate;
    double _pausedTime;
    struct CGRect _visibleRect;
    long long _scaleMode;
    NSMutableDictionary *_touchMap;
    struct CGRect _bounds;
    BOOL _isSetup;
    BOOL _usesExplicitUpdate;
    BOOL _usesExplicitRender;
    id _view;
    BOOL __needsUpdate;
    BOOL __needsRender;
    SKPhysicsWorld *_physicsWorld;
    PKPhysicsWorld *__pkPhysicsWorld;
}

+ (id)sceneWithContentsOfFile:(id)arg1 size:(struct CGSize)arg2;
+ (id)sceneWithContentsOfFile:(id)arg1;
+ (id)sceneWithSize:(struct CGSize)arg1;
@property(retain) PKPhysicsWorld *_pkPhysicsWorld; // @synthesize _pkPhysicsWorld=__pkPhysicsWorld;
@property BOOL _needsRender; // @synthesize _needsRender=__needsRender;
@property BOOL _needsUpdate; // @synthesize _needsUpdate=__needsUpdate;
@property long long scaleMode; // @synthesize scaleMode=_scaleMode;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) SKView *view;
- (void)setPaused:(BOOL)arg1;
- (void)didSimulatePhysics;
- (void)didEvaluateActions;
- (void)_update:(double)arg1;
- (void)update:(double)arg1;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)willMoveFromView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)_didMoveToView:(id)arg1;
@property(readonly) SKPhysicsWorld *physicsWorld; // @synthesize physicsWorld=_physicsWorld;
@property struct CGSize size;
@property struct CGPoint visibleRectCenter;
@property struct CGSize visibleRectSize;
@property struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (struct CGPoint)convertPointToView:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromView:(struct CGPoint)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)setZPosition:(double)arg1;
- (double)zPosition;
- (void)setZRotation:(double)arg1;
- (double)zRotation;
- (void)setYScale:(double)arg1;
- (double)yScale;
- (void)setXScale:(double)arg1;
- (double)xScale;
- (void)setScale:(double)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
@property struct CGPoint anchorPoint;
@property(retain) NSColor *backgroundColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setNeedsRender;
- (void)_setNeedsUpdate;
@property BOOL _usesExplicitRender;
@property BOOL _usesExplicitUpdate;
- (void)didContinueContact:(id)arg1;

@end
