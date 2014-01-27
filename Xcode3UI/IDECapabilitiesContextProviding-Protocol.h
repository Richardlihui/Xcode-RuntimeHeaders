/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, NSString, Xcode3TargetBuildSettingsCoordinator, Xcode3TargetInfoPlistCoordinator, Xcode3TargetLinkedFrameworksCoordinator, Xcode3TargetPortalEntitlementsCoordinator;

@protocol IDECapabilitiesContextProviding <NSObject>
@property(readonly) id <IDEBlueprint> blueprint;
@property(readonly) NSArray *explicitlyEnabledAppIDFeatures;
@property(readonly) NSArray *enabledAppIDFeatures;
@property(readonly, getter=isInternal) BOOL internal;
@property(readonly) NSString *targetBundleIdentifier;
@property(readonly) NSString *platformIdentifier;
@property(readonly) Xcode3TargetLinkedFrameworksCoordinator *linkedFrameworksCoordinator;
@property(readonly) Xcode3TargetPortalEntitlementsCoordinator *portalEntitlementsCoordinator;
@property(readonly) Xcode3TargetBuildSettingsCoordinator *buildSettingsCoordinator;
@property(readonly) Xcode3TargetInfoPlistCoordinator *infoPlistCoordinator;
@property(readonly) id <IDEEntitlementsCoordination> entitlementsCoordinator;
- (id)appIDFeatureStateBasedOnCapabilitiesAndEntitlements;
- (id)appIDFeatureStateBasedOnCapabilities;
- (void)setEnabled:(BOOL)arg1 forCapabilityItemModel:(id)arg2;
- (BOOL)isCapabilityItemEnabled:(id)arg1 allowEducatedGuess:(BOOL)arg2;
- (BOOL)isCapabilityItemModelEnabled:(id)arg1;
@end
