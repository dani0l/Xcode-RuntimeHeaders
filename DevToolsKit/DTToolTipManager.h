/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSTimer;

@interface DTToolTipManager : NSObject
{
    struct __CFDictionary *registeredViews;
    id eventMonitor;
    NSTimer *timer;
    long long enabledBlocks;
}

+ (id)sharedInstance;
- (void)mouseRested:(id)arg1;
- (void)unregisterViewForToolTips:(id)arg1;
- (void)registerViewForToolTips:(id)arg1 delegate:(id)arg2;
- (id)allViews;
- (id)delegateForView:(id)arg1;
- (void)monitorEvent:(id)arg1;
- (void)scheduleMouseRested;
- (void)unscheduleMouseRested;
- (void)enableTooltips;
- (void)disableTooltips;
- (BOOL)tooltipsAreEnabled;
- (void)dealloc;
- (id)init;

@end

