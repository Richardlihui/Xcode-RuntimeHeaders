/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IDESourceCodeBlameControllerDelegate <NSObject>
- (void)blameController:(id)arg1 showRevision:(id)arg2;
- (void)blameController:(id)arg1 diffAgainstRevision:(id)arg2;
- (void)blameController:(id)arg1 compareToRevision:(id)arg2;
- (void)blameController:(id)arg1 compareRevisionToPreviousRevision:(id)arg2;

@optional
- (void)blameController:(id)arg1 didEncounterError:(id)arg2;
@end
