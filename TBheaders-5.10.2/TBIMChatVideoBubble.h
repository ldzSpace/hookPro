//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMChatBaseBubble.h"

@class UIImageView, UILabel, UIView, YWVideoProgressLayer;

@interface TBIMChatVideoBubble : TBIMChatBaseBubble
{
    UIImageView *_innerBubbleImageView;	// 8 = 0x8
    UIImageView *_shapeImageView;	// 16 = 0x10
    UIImageView *_placeHolderImageView;	// 24 = 0x18
    long long _innerChatBubbleDirection;	// 32 = 0x20
    UILabel *_videoSizeLabel;	// 40 = 0x28
    UIView *_videoSizeBackgroudMask;	// 48 = 0x30
    UIImageView *_playIconImageView;	// 56 = 0x38
    YWVideoProgressLayer *_bubbleProgressLayer;	// 64 = 0x40
}

@property(retain, nonatomic) YWVideoProgressLayer *bubbleProgressLayer; // @synthesize bubbleProgressLayer=_bubbleProgressLayer;
@property(nonatomic) __weak UIImageView *playIconImageView; // @synthesize playIconImageView=_playIconImageView;
@property(nonatomic) __weak UIView *videoSizeBackgroudMask; // @synthesize videoSizeBackgroudMask=_videoSizeBackgroudMask;
@property(nonatomic) __weak UILabel *videoSizeLabel; // @synthesize videoSizeLabel=_videoSizeLabel;
@property(nonatomic) long long innerChatBubbleDirection; // @synthesize innerChatBubbleDirection=_innerChatBubbleDirection;
@property(retain, nonatomic) UIImageView *placeHolderImageView; // @synthesize placeHolderImageView=_placeHolderImageView;
@property(retain, nonatomic) UIImageView *shapeImageView; // @synthesize shapeImageView=_shapeImageView;
@property(retain, nonatomic) UIImageView *innerBubbleImageView; // @synthesize innerBubbleImageView=_innerBubbleImageView;
- (void).cxx_destruct;
- (id)imageWithBubbleDirection:(long long)arg1;
- (id)currentPresentImage;
- (long long)chatBubbleLayoutType;
- (long long)chatBubbleDirection;
- (void)updateVideoSize:(double)arg1;
- (void)updateBubbleWithBubbleLayout:(id)arg1 messageAdapter:(id)arg2;
- (id)initWithDirection:(long long)arg1;

@end

