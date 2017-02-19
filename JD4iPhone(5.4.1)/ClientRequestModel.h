//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ClientRequestModel : NSObject
{
    NSString *_functionId;
    NSString *_body;
    NSString *_client;
    NSString *_clientVersion;
    NSString *_build;
    NSString *_networkType;
    NSString *_screen;
    NSString *_osVersion;
    NSString *_d_brand;
    NSString *_d_model;
    NSString *_partner;
    NSString *_activeCity;
    NSString *_uuid;
    NSString *_openudid;
    NSString *_deviceId;
    NSString *_adid;
    NSString *_sign;
    NSString *_st;
    NSString *_sv;
}

@property(copy, nonatomic) NSString *sv; // @synthesize sv=_sv;
@property(copy, nonatomic) NSString *st; // @synthesize st=_st;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *openudid; // @synthesize openudid=_openudid;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *activeCity; // @synthesize activeCity=_activeCity;
@property(copy, nonatomic) NSString *partner; // @synthesize partner=_partner;
@property(copy, nonatomic) NSString *d_model; // @synthesize d_model=_d_model;
@property(copy, nonatomic) NSString *d_brand; // @synthesize d_brand=_d_brand;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *screen; // @synthesize screen=_screen;
@property(copy, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(copy, nonatomic) NSString *build; // @synthesize build=_build;
@property(copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(copy, nonatomic) NSString *client; // @synthesize client=_client;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *functionId; // @synthesize functionId=_functionId;
- (void).cxx_destruct;
- (id)rsaDictionary;
- (id)toDictionary;
- (id)initWithFunctionId:(id)arg1 partner:(id)arg2 body:(id)arg3 deviceId:(id)arg4 activeCity:(id)arg5;
- (id)initWithFunctionId:(id)arg1 partner:(id)arg2 body:(id)arg3 uuid:(id)arg4 openudid:(id)arg5;

@end
