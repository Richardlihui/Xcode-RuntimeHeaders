/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCFilterOutputStream.h>

@class XCBuildLogSectionRecorder;

@interface XCBuildCommandOutputParser : XCFilterOutputStream
{
    XCBuildLogSectionRecorder *_logSectionRecorder;
}

- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)setLogSectionRecorder:(id)arg1;
- (id)logSectionRecorder;
- (id)initWithNextOutputStream:(id)arg1;

@end
