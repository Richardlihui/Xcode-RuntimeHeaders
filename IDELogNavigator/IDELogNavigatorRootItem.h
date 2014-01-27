/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDELogManager, IDELogNavigatorItem, IDEWorkspace, NSArray, NSMutableArray;

@interface IDELogNavigatorRootItem : NSObject
{
    IDELogManager *_localGroup;
    NSArray *_logGroups;
    IDEWorkspace *_workspace;
    BOOL _groupByTime;
    NSArray *_observationTokens;
    NSArray *_botObservationTokens;
    NSMutableArray *_localCachedGroups;
    IDELogNavigatorItem *_workspaceItem;
}

+ (id)logRootItemForWorkspace:(id)arg1;
@property(retain, nonatomic) IDELogNavigatorItem *workspaceItem; // @synthesize workspaceItem=_workspaceItem;
@property(retain, nonatomic) NSMutableArray *localCachedGroups; // @synthesize localCachedGroups=_localCachedGroups;
@property(copy, nonatomic) NSArray *botObservationTokens; // @synthesize botObservationTokens=_botObservationTokens;
@property(copy, nonatomic) NSArray *observationTokens; // @synthesize observationTokens=_observationTokens;
@property(retain, nonatomic) IDELogManager *localGroup; // @synthesize localGroup=_localGroup;
@property(copy, nonatomic) NSArray *logGroups; // @synthesize logGroups=_logGroups;
- (void).cxx_destruct;
- (void)updateLogGroups;
- (id)_groupByGroupArray;
- (id)_groupByTimeArray;
- (id)_getDateForObject:(id)arg1;
- (void)dealloc;
- (id)initWithLogManager:(id)arg1 groupedByTime:(BOOL)arg2;
- (id)initWithLogManager:(id)arg1;

@end
