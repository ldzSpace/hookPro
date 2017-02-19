//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIImage, UILabel, UIView;

@interface TBHTHomeHotPresenter : NSObject
{
    UILabel *_title;	// 8 = 0x8
    NSArray *_colors;	// 16 = 0x10
    NSArray *_subTitles;	// 24 = 0x18
    UIImage *_placeholder;	// 32 = 0x20
    UIView *_containerView;	// 40 = 0x28
    NSString *_location;	// 48 = 0x30
    NSString *_locationName;	// 56 = 0x38
    NSMutableArray *_HTHotCategoryList;	// 64 = 0x40
    UIView *_hotView;	// 72 = 0x48
}

@property(retain, nonatomic) UIView *hotView; // @synthesize hotView=_hotView;
@property(retain, nonatomic) NSMutableArray *HTHotCategoryList; // @synthesize HTHotCategoryList=_HTHotCategoryList;
@property(retain, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)tappedHotView:(id)arg1;
- (void)setData:(id)arg1;
- (id)initWithParent:(id)arg1;

@end
