//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ATCLanlanMenuItem : NSObject
{
    _Bool _useDislike;	// 8 = 0x8
    NSString *_icon;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_tabId;	// 32 = 0x20
    NSString *_desc;	// 40 = 0x28
    NSDictionary *_valueKeys;	// 48 = 0x30
    NSString *_contentId;	// 56 = 0x38
    NSString *_isNewTab;	// 64 = 0x40
    NSString *_pullTip;	// 72 = 0x48
    NSString *_url;	// 80 = 0x50
}

@property _Bool useDislike; // @synthesize useDislike=_useDislike;
@property(retain) NSString *url; // @synthesize url=_url;
@property(retain) NSString *pullTip; // @synthesize pullTip=_pullTip;
@property(retain) NSString *isNewTab; // @synthesize isNewTab=_isNewTab;
@property(retain) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain) NSDictionary *valueKeys; // @synthesize valueKeys=_valueKeys;
@property(retain) NSString *desc; // @synthesize desc=_desc;
@property(retain) NSString *tabId; // @synthesize tabId=_tabId;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isFeed;
- (_Bool)isBaiKe;
- (_Bool)isBangDan;
- (_Bool)isDouble11;
- (_Bool)isZanItem;
- (_Bool)isTopicItem;
- (_Bool)isAllItem;
- (id)initWithDict:(id)arg1;

@end
