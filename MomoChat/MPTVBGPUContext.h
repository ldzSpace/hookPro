//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, EAGLSharegroup, MPTVBGLProgram, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MPTVBGPUContext : NSObject
{
    NSMutableDictionary *shaderProgramCache;
    NSMutableArray *shaderProgramUsageHistory;
    EAGLSharegroup *_sharegroup;
    _Bool viewable;
    EAGLContext *_context;
    MPTVBGLProgram *_currentShaderProgram;
    NSObject<OS_dispatch_queue> *_contextQueue;
    struct __CVOpenGLESTextureCache *_coreVideoTextureCache;
}

+ (_Bool)supportsFastTextureUpload;
+ (struct CGSize)sizeThatFitsWithinATextureForSize:(struct CGSize)arg1;
+ (_Bool)deviceSupportsFramebufferReads;
+ (_Bool)deviceSupportsRedTextures;
+ (_Bool)deviceSupportsOpenGLESExtension:(id)arg1;
+ (int)maximumVaryingVectorsForThisDevice;
+ (int)maximumTextureUnitsForThisDevice;
+ (int)maximumTextureSizeForThisDevice;
+ (void)setActiveShaderProgram:(id)arg1;
+ (void)useImageProcessingContext;
+ (id)sharedContextQueue;
+ (id)sharedImageProcessingContext;
+ (void *)contextKey;
@property(nonatomic) struct __CVOpenGLESTextureCache *coreVideoTextureCache; // @synthesize coreVideoTextureCache=_coreVideoTextureCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
@property(retain, nonatomic) MPTVBGLProgram *currentShaderProgram; // @synthesize currentShaderProgram=_currentShaderProgram;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (id)createContext;
- (void)useSharegroup:(id)arg1;
- (id)programForVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (void)presentBufferForDisplay;
- (void)clearPrograms;
- (id)init;
- (void)disable;
- (void)enable;

@end
