//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IRemoteControlCheckExt-Protocol.h"

__attribute__((visibility("hidden")))
@interface MMMusicPlayerSessionMgr : NSObject <IRemoteControlCheckExt>
{
}

+ (id)sharedMusicPlayerSessionMgr;
- (void)setNeedRestartMusicByOthers:(_Bool)arg1;
- (void)iRemoteControlCheckShouldPrevTrack;
- (void)iRemoteControlCheckShouldNextTrack;
- (void)iRemoteControlCheckPluginOff;
- (void)iRemoteControlCheckShouldStop;
- (void)iRemoteControlCheckShouldPause;
- (void)iRemoteControlCheckShouldPlay;
- (void)notifyNewPlayStateChange:(id)arg1;
- (void)endNewMusicPlayerAudioSession:(id)arg1;
- (void)beginNewMusicPlayerAudioSession:(id)arg1;
- (void)notifyPlayStateChange:(id)arg1;
- (void)endMusicPlayerAudioSession:(id)arg1;
- (void)beginMusicPlayerAudioSession:(id)arg1;
- (void)dealloc;
- (id)init;

@end
