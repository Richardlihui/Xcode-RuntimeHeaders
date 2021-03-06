/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEAlert.h"

@class NSString;

@interface IDEShowTabAlert : IDEAlert
{
    int _tabTarget;
    NSString *_tabName;
    double _lastChanged;
}

@property(nonatomic) double lastChanged; // @synthesize lastChanged=_lastChanged;
@property(nonatomic) int tabTarget; // @synthesize tabTarget=_tabTarget;
@property(retain, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
- (void).cxx_destruct;
- (int)alertPropertyListVersion;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(id)arg4;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)valuesForProperty:(id)arg1;
- (id)tabTargets;

@end

