//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "TBTradeView-Protocol.h"

@class NSString, UIView;

@interface TBTradeView : NSObject <TBTradeView, NSCopying>
{
    UIView *_tradeView;	// 8 = 0x8
}

@property(retain, nonatomic) UIView *tradeView; // @synthesize tradeView=_tradeView;
- (void).cxx_destruct;
- (void)setView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
