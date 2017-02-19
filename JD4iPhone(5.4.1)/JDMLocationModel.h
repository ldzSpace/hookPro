//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface JDMLocationModel : JDModel
{
    NSString *_movieCityName;
    NSString *_movieCityId;
    NSString *_ticCityName;
    NSString *_ticCityId;
}

@property(copy, nonatomic) NSString *ticCityId; // @synthesize ticCityId=_ticCityId;
@property(copy, nonatomic) NSString *ticCityName; // @synthesize ticCityName=_ticCityName;
@property(copy, nonatomic) NSString *movieCityId; // @synthesize movieCityId=_movieCityId;
@property(copy, nonatomic) NSString *movieCityName; // @synthesize movieCityName=_movieCityName;
- (void).cxx_destruct;
- (void)saveCurrentCityInfo;
- (void)initWithHistoryLocation;
- (void)setDataWithDic:(id)arg1;

@end
