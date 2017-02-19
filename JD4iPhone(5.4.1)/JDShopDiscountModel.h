//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSNumber, NSString;

@interface JDShopDiscountModel : JDModel
{
    NSString *act;
    NSNumber *applicability;
    NSString *beginTime;
    NSNumber *couponId;
    NSNumber *discount;
    NSString *endTime;
    NSNumber *platformType;
    NSNumber *quota;
    NSString *name;
    NSNumber *remain;
    NSNumber *takeRule;
    NSNumber *type;
    NSNumber *venderId;
    NSString *_batchId;
    NSString *_imageUrl;
    NSNumber *_couponStatus;
}

@property(retain, nonatomic) NSNumber *couponStatus; // @synthesize couponStatus=_couponStatus;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
@property(retain, nonatomic) NSNumber *venderId; // @synthesize venderId;
@property(retain, nonatomic) NSNumber *type; // @synthesize type;
@property(retain, nonatomic) NSNumber *takeRule; // @synthesize takeRule;
@property(retain, nonatomic) NSNumber *remain; // @synthesize remain;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSNumber *quota; // @synthesize quota;
@property(retain, nonatomic) NSNumber *platformType; // @synthesize platformType;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime;
@property(retain, nonatomic) NSNumber *discount; // @synthesize discount;
@property(retain, nonatomic) NSNumber *couponId; // @synthesize couponId;
@property(retain, nonatomic) NSString *beginTime; // @synthesize beginTime;
@property(retain, nonatomic) NSNumber *applicability; // @synthesize applicability;
@property(retain, nonatomic) NSString *act; // @synthesize act;
- (void)dealloc;
- (void)setDataWithStowShopCouponModel:(id)arg1;
- (id)toDictionary;
- (void)setDataWithDic:(id)arg1;

@end
