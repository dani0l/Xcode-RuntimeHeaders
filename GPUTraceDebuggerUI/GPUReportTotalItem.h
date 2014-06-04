/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSColor, NSString;

@interface GPUReportTotalItem : NSObject
{
    NSString *_label;
    double _currentTotalFrameTime;
    double _baselineTotalFrameTime;
    double _difference;
}

@property(nonatomic) double difference; // @synthesize difference=_difference;
@property(nonatomic) double baselineTotalFrameTime; // @synthesize baselineTotalFrameTime=_baselineTotalFrameTime;
@property(nonatomic) double currentTotalFrameTime; // @synthesize currentTotalFrameTime=_currentTotalFrameTime;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSColor *differenceColor;

@end
