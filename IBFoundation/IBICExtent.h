/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IBFoundation/IBICMultipartImageRepSlotComponent.h>

@interface IBICExtent : IBICMultipartImageRepSlotComponent
{
    int _extentValue;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 extent:(int)arg4 displayOrder:(double)arg5;
+ (id)contentsJSONKey;
@property(readonly) int extentValue; // @synthesize extentValue=_extentValue;
- (BOOL)isEqualToSchemaImageRepIDComponent:(id)arg1;
- (BOOL)isEqualToExtent:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 extent:(int)arg4 displayOrder:(double)arg5;

@end
