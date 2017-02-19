//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFESPDYHeaderBlockCompressor;
@protocol TFESPDYFrameEncoderDelegate;

@interface TFESPDYFrameEncoder : NSObject
{
    TFESPDYHeaderBlockCompressor *_compressor;	// 8 = 0x8
    unsigned long long _encodedHeadersLength;	// 16 = 0x10
    unsigned long long _compressedLength;	// 24 = 0x18
    char *_encodedHeaders;	// 32 = 0x20
    char *_compressed;	// 40 = 0x28
    id <TFESPDYFrameEncoderDelegate> _delegate;	// 48 = 0x30
}

@property(nonatomic) __weak id <TFESPDYFrameEncoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_encodeHeaders:(id)arg1;
- (_Bool)encodeWindowUpdateFrame:(id)arg1;
- (_Bool)encodeHeadersFrame:(id)arg1;
- (_Bool)encodeGoAwayFrame:(id)arg1;
- (_Bool)encodePingFrame:(id)arg1;
- (_Bool)encodeSettingsFrame:(id)arg1;
- (_Bool)encodeRstStreamFrame:(id)arg1;
- (_Bool)encodeSynReplyFrame:(id)arg1;
- (_Bool)encodeSynStreamFrame:(id)arg1;
- (_Bool)encodeDataFrame:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 headerCompressionLevel:(unsigned long long)arg2;

@end
