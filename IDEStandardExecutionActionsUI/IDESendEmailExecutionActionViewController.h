/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEActionSliceViewController.h"

@class IDESendEmailExecutionAction, NSScrollView, NSTextField, NSTextView;

@interface IDESendEmailExecutionActionViewController : IDEActionSliceViewController
{
    NSTextField *_toField;
    NSTextField *_subjectField;
    NSTextView *_bodyTextView;
    NSScrollView *_bodyScrollView;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(readonly) IDESendEmailExecutionAction *sendEmailAction;

@end

