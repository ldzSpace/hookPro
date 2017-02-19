//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol TBIMBlacklistServiceAdapterDelegate;

@protocol TBIMBlacklistServiceAdapter <NSObject>
- (void)modifyStatus:(_Bool)arg1 withModifyUserId:(NSString *)arg2 forUserId:(NSString *)arg3;
- (void)blacklistPageNo:(long long)arg1 pageSize:(long long)arg2 forUserId:(NSString *)arg3;
- (void)removeDelegate:(id <TBIMBlacklistServiceAdapterDelegate>)arg1;
- (void)addDelegate:(id <TBIMBlacklistServiceAdapterDelegate>)arg1;
@end
