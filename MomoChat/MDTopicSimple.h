//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSMutableArray, NSString;

@interface MDTopicSimple : EtaModel
{
    int _topic_count;
    NSString *_topic_name;
    NSMutableArray *_topic_list;
    NSString *_topic_action;
}

+ (id)eta_valueTransform;
+ (id)eta_jsonKeyPathsByProperty;
@property(retain, nonatomic) NSString *topic_action; // @synthesize topic_action=_topic_action;
@property(retain, nonatomic) NSMutableArray *topic_list; // @synthesize topic_list=_topic_list;
@property(nonatomic) int topic_count; // @synthesize topic_count=_topic_count;
@property(retain, nonatomic) NSString *topic_name; // @synthesize topic_name=_topic_name;
- (void).cxx_destruct;

@end
