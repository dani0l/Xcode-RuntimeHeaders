/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IBLayoutManager, NSSet;

@interface IBViewTrackerLayoutGuideState : NSObject
{
    IBLayoutManager *layoutManager;
    NSSet *layoutGuideMatches;
    struct CGRect layoutFrame;
}

@property(retain, nonatomic) NSSet *layoutGuideMatches; // @synthesize layoutGuideMatches;
@property(retain, nonatomic) IBLayoutManager *layoutManager; // @synthesize layoutManager;
@property(nonatomic) struct CGRect layoutFrame; // @synthesize layoutFrame;
- (void).cxx_destruct;

@end
