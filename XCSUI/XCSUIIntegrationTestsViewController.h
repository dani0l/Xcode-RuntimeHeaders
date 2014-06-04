/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTViewController.h"

#import "DVTSplitViewDelegate-Protocol.h"
#import "XCSBotSupportingEditorHostedViewController-Protocol.h"

@class DVTBorderedView, DVTReplacementView, DVTSplitView, NSArray, NSString, XCSBot, XCSBotSupportingEditor, XCSIntegration;

@interface XCSUIIntegrationTestsViewController : DVTViewController <DVTSplitViewDelegate, XCSBotSupportingEditorHostedViewController>
{
    XCSBotSupportingEditor *_botSupportingEditor;
    NSArray *_currentSelectedDocumentLocations;
    XCSIntegration *_integration;
    XCSBot *_bot;
    DVTReplacementView *_navigatorReplacementView;
    DVTReplacementView *_detailReplacementView;
    DVTBorderedView *_borderedView;
    DVTSplitView *_splitView;
}

+ (BOOL)instancesCanContainDocumentLocation:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
@property __weak DVTSplitView *splitView; // @synthesize splitView=_splitView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property __weak DVTReplacementView *detailReplacementView; // @synthesize detailReplacementView=_detailReplacementView;
@property __weak DVTReplacementView *navigatorReplacementView; // @synthesize navigatorReplacementView=_navigatorReplacementView;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
@property(retain, nonatomic) XCSBotSupportingEditor *botSupportingEditor; // @synthesize botSupportingEditor=_botSupportingEditor;
- (void).cxx_destruct;
- (void)selectDocumentLocations:(id)arg1;
@property(readonly) NSArray *currentSelectedItems;
@property(readonly) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
- (id)installedDetailsViewController;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
