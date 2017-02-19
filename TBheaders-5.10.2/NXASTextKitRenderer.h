//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NXASTextKitContext, NXASTextKitShadower;
@protocol NXASTextKitTruncating;

@interface NXASTextKitRenderer : NSObject
{
    struct CGSize _calculatedSize;	// 8 = 0x8
    NXASTextKitContext *_context;	// 24 = 0x18
    id <NXASTextKitTruncating> _truncater;	// 32 = 0x20
    NXASTextKitShadower *_shadower;	// 40 = 0x28
    struct CGSize _constrainedSize;	// 48 = 0x30
    struct UIEdgeInsets _contentInsets;	// 64 = 0x40
    struct NXASTextKitAttributes _attributes;	// 96 = 0x60
}

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) struct CGSize constrainedSize; // @synthesize constrainedSize=_constrainedSize;
@property(readonly, nonatomic) struct NXASTextKitAttributes attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NXASTextKitShadower *shadower; // @synthesize shadower=_shadower;
@property(readonly, nonatomic) id <NXASTextKitTruncating> truncater; // @synthesize truncater=_truncater;
@property(readonly, nonatomic) NXASTextKitContext *context; // @synthesize context=_context;
- (id).cxx_construct;
- (void).cxx_destruct;
- (vector_d5f79a51)visibleRanges;
- (unsigned long long)lineCount;
- (void)drawInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (struct CGSize)size;
- (void)_calculateSize;
- (id)initWithTextKitAttributes:(const struct NXASTextKitAttributes *)arg1 constrainedSize:(struct CGSize)arg2;

@end
