/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol DVTSourceControlSSHKeyGeneratorProtocol <NSObject>
- (void)uploadPublicSSHKeyFromFolder:(id)arg1 toServer:(id)arg2 forUsername:(id)arg3 completionBlock:(id)arg4;
- (void)generateSSHKeysWithPassphrase:(id)arg1 inFolder:(id)arg2 completionBlock:(id)arg3;
@end
