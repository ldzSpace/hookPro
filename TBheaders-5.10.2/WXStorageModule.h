//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface WXStorageModule : NSObject <WXModuleProtocol>
{
    NSString *_plist;	// 8 = 0x8
    _Bool _setupFinished;	// 16 = 0x10
    WXSDKInstance *weexInstance;	// 24 = 0x18
}

+ (id)wx_export_method_28;
+ (id)wx_export_method_27;
+ (id)wx_export_method_26;
+ (id)wx_export_method_25;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)clear:(id)arg1;
- (void)mutiRemove:(id)arg1 callback:(id)arg2;
- (void)mutiGet:(id)arg1 callback:(id)arg2;
- (void)mutiSet:(id)arg1 callback:(id)arg2;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
