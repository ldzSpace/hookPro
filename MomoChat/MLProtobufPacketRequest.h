//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFTimer, MLProtobufBytePacket, MLProtobufPacketObserver, NSSet;

@interface MLProtobufPacketRequest : NSObject
{
    MLProtobufBytePacket *_requestPacket;
    MLProtobufBytePacket *_responsePacket;
    MLProtobufPacketObserver *_observer;
    id _target;
    SEL _didSendSuccessSelector;
    SEL _didSendFailureSelector;
    double _timeout;
    MFTimer *_timer;
    NSSet *_targetFilterSet;
}

@property(retain, nonatomic) NSSet *targetFilterSet; // @synthesize targetFilterSet=_targetFilterSet;
@property(retain, nonatomic) MFTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) SEL didSendFailureSelector; // @synthesize didSendFailureSelector=_didSendFailureSelector;
@property(nonatomic) SEL didSendSuccessSelector; // @synthesize didSendSuccessSelector=_didSendSuccessSelector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) MLProtobufPacketObserver *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) MLProtobufBytePacket *responsePacket; // @synthesize responsePacket=_responsePacket;
@property(retain, nonatomic) MLProtobufBytePacket *requestPacket; // @synthesize requestPacket=_requestPacket;
- (void).cxx_destruct;
- (void)cleanAndCancel;
- (void)checkTimeout;
- (void)didReceiveTimerMark:(id)arg1;
- (void)delayTimer;
- (void)startTimer;
- (void)didReceiveObserverResponse:(id)arg1;
- (void)dealloc;
- (id)initWithPacket:(id)arg1 andFilterType:(long long)arg2;

@end
