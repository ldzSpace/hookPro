//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChangeSkinMapModel : NSObject
{
    _Bool _isShowSkin;
    long long _cutDownTime;
    long long _skinVersion;
    NSString *_businessName;
}

@property(copy, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(nonatomic) long long skinVersion; // @synthesize skinVersion=_skinVersion;
@property(nonatomic) long long cutDownTime; // @synthesize cutDownTime=_cutDownTime;
@property(nonatomic) _Bool isShowSkin; // @synthesize isShowSkin=_isShowSkin;
- (void).cxx_destruct;

@end
