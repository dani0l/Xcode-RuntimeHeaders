/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

@class NSTextField, XCSTestPerfMetric, XCSUIPerfMetricIterationsGraphView;

@interface XCUIPerfMetricBadgePopoverViewController : NSViewController
{
    XCSTestPerfMetric *_testPerfMetric;
    NSTextField *_resultTextField;
    NSTextField *_baselineAverageTextField;
    NSTextField *_relativeStdDevTextField;
    NSTextField *_averageTextField;
    XCSUIPerfMetricIterationsGraphView *_graphView;
}

@property __weak XCSUIPerfMetricIterationsGraphView *graphView; // @synthesize graphView=_graphView;
@property __weak NSTextField *averageTextField; // @synthesize averageTextField=_averageTextField;
@property __weak NSTextField *relativeStdDevTextField; // @synthesize relativeStdDevTextField=_relativeStdDevTextField;
@property __weak NSTextField *baselineAverageTextField; // @synthesize baselineAverageTextField=_baselineAverageTextField;
@property __weak NSTextField *resultTextField; // @synthesize resultTextField=_resultTextField;
@property(retain, nonatomic) XCSTestPerfMetric *testPerfMetric; // @synthesize testPerfMetric=_testPerfMetric;
- (void).cxx_destruct;
- (void)refreshUI;
- (id)abbreviatedUnitFromUnit:(id)arg1;
- (void)updateBaselineAction:(id)arg1;

@end
