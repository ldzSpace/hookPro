//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DataChannel, NSData;

@protocol DataChannelDataDelegate <NSObject>

@optional
- (void)notifyChannelFail:(DataChannel *)arg1;
- (void)notifyChannelSueesss:(DataChannel *)arg1;
- (void)recvCustomFrametype:(short)arg1 Flags:(BOOL)arg2 Data:(NSData *)arg3 channel:(DataChannel *)arg4;
@end
