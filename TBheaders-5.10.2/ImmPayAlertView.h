//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MQPAlertViewDelegate-Protocol.h"

@class MQPAlertView, NSArray, NSString;
@protocol MMPActionDelegate;

@interface ImmPayAlertView : NSObject <MQPAlertViewDelegate>
{
    MQPAlertView *_alertDialog;	// 8 = 0x8
    NSArray *_buttons;	// 16 = 0x10
    id <MMPActionDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <MMPActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)mqpAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showDialog:(id)arg1 message:(id)arg2 buttons:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
