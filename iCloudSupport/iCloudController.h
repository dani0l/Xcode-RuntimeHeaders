/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "IDECommandHandler-Protocol.h"
#import "IDECommandHandlerVendor-Protocol.h"
#import "IDEInitialization-Protocol.h"
#import "iCloudServiceObserver-Protocol.h"
#import "iCloudUIDelegate-Protocol.h"

@class DVTObservingToken, DVTStackBacktrace, IDEWorkspace, NSArray, NSButton, NSImageView, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSSet, NSString, NSTextField, NSTimer, NSView, NSWindow, iCloud, iCloudDocumentLocation;

@interface iCloudController : NSObject <IDEInitialization, DVTInvalidation, iCloudServiceObserver, iCloudUIDelegate, IDECommandHandlerVendor, IDECommandHandler>
{
    DVTObservingToken *_workspaceLoadingToken;
    NSMutableArray *_transferMeasurements;
    double _transferMeasurementsinitialTimeInterval;
    double _transferMeasurementsLastTimeInterval;
    NSTimer *_transferMeasurementsTimer;
    long long _childFetchesInProgress;
    id <iCloudItem> _temporaryRoot;
    NSSet *_devices;
    NSRecursiveLock *_devicesLock;
    BOOL _firstLoginAttempt;
    IDEWorkspace *_workspace;
    NSString *_UUID;
    iCloud *_iCloud;
    NSSet *_entitlementFiles;
    NSSet *_containerNames;
    double _lastUpdated;
    NSArray *_logEntries;
    iCloudDocumentLocation *_contentDocumentLocation;
    NSMutableDictionary *_progressForItemID;
    NSRecursiveLock *_itemsLock;
    NSMutableDictionary *_items;
    NSRecursiveLock *_statusesLock;
    NSMutableDictionary *_statuses;
    NSRecursiveLock *_accountInformationLock;
    NSMutableDictionary *_accountInformation;
    NSMutableDictionary *_pathNameForContainerName;
    NSMutableDictionary *_pathForContainerName;
    NSMutableArray *_containerNamesToWipe;
    NSWindow *_wipeAppContainerSheet;
    NSImageView *_wipeWarningImageWell;
    NSTextField *_wipeTitleTextField;
    NSTextField *_wipeWarningTextField;
    NSView *_wipeMultipleContainersView;
    NSTextField *_wipeDetailsTextField;
    NSView *_wipeMultipleScrollView;
    NSButton *_wipeSheetDoneButton;
    NSLayoutConstraint *_wipeImageBottomSpacingConstraint;
    NSLayoutConstraint *_wipeDetailsTextFieldBottomSpacingConstraint;
    NSLayoutConstraint *_wipeDetailsTextFieldVerticalSpacingConstraint;
    NSLayoutConstraint *_wipeMultipleScrollViewConstraint1;
    NSLayoutConstraint *_wipeMultipleScrollViewConstraint2;
    NSLayoutConstraint *_wipeMultipleScrollViewSuperviewConstraint1;
    NSLayoutConstraint *_wipeMultipleScrollViewSuperviewConstraint2;
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (BOOL)_isValidSelector:(SEL)arg1;
+ (id)controllerForDocumentLocation:(id)arg1;
+ (id)controllerForURL:(id)arg1;
+ (id)controllerForUUID:(id)arg1;
+ (id)controllerForWorkspace:(id)arg1;
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
+ (void)initialize;
@property(retain) NSLayoutConstraint *wipeMultipleScrollViewSuperviewConstraint2; // @synthesize wipeMultipleScrollViewSuperviewConstraint2=_wipeMultipleScrollViewSuperviewConstraint2;
@property(retain) NSLayoutConstraint *wipeMultipleScrollViewSuperviewConstraint1; // @synthesize wipeMultipleScrollViewSuperviewConstraint1=_wipeMultipleScrollViewSuperviewConstraint1;
@property(retain) NSLayoutConstraint *wipeMultipleScrollViewConstraint2; // @synthesize wipeMultipleScrollViewConstraint2=_wipeMultipleScrollViewConstraint2;
@property(retain) NSLayoutConstraint *wipeMultipleScrollViewConstraint1; // @synthesize wipeMultipleScrollViewConstraint1=_wipeMultipleScrollViewConstraint1;
@property(retain) NSLayoutConstraint *wipeDetailsTextFieldVerticalSpacingConstraint; // @synthesize wipeDetailsTextFieldVerticalSpacingConstraint=_wipeDetailsTextFieldVerticalSpacingConstraint;
@property(retain) NSLayoutConstraint *wipeDetailsTextFieldBottomSpacingConstraint; // @synthesize wipeDetailsTextFieldBottomSpacingConstraint=_wipeDetailsTextFieldBottomSpacingConstraint;
@property __weak NSLayoutConstraint *wipeImageBottomSpacingConstraint; // @synthesize wipeImageBottomSpacingConstraint=_wipeImageBottomSpacingConstraint;
@property __weak NSButton *wipeSheetDoneButton; // @synthesize wipeSheetDoneButton=_wipeSheetDoneButton;
@property(retain) NSView *wipeMultipleScrollView; // @synthesize wipeMultipleScrollView=_wipeMultipleScrollView;
@property __weak NSTextField *wipeDetailsTextField; // @synthesize wipeDetailsTextField=_wipeDetailsTextField;
@property __weak NSView *wipeMultipleContainersView; // @synthesize wipeMultipleContainersView=_wipeMultipleContainersView;
@property __weak NSTextField *wipeWarningTextField; // @synthesize wipeWarningTextField=_wipeWarningTextField;
@property __weak NSTextField *wipeTitleTextField; // @synthesize wipeTitleTextField=_wipeTitleTextField;
@property __weak NSImageView *wipeWarningImageWell; // @synthesize wipeWarningImageWell=_wipeWarningImageWell;
@property(retain) NSWindow *wipeAppContainerSheet; // @synthesize wipeAppContainerSheet=_wipeAppContainerSheet;
@property(readonly, nonatomic) NSMutableArray *containerNamesToWipe; // @synthesize containerNamesToWipe=_containerNamesToWipe;
@property(retain, nonatomic) NSMutableDictionary *pathForContainerName; // @synthesize pathForContainerName=_pathForContainerName;
@property(retain, nonatomic) NSMutableDictionary *pathNameForContainerName; // @synthesize pathNameForContainerName=_pathNameForContainerName;
@property(retain, nonatomic) NSMutableDictionary *accountInformation; // @synthesize accountInformation=_accountInformation;
@property(retain, nonatomic) NSRecursiveLock *accountInformationLock; // @synthesize accountInformationLock=_accountInformationLock;
@property(retain, nonatomic) NSMutableDictionary *statuses; // @synthesize statuses=_statuses;
@property(retain, nonatomic) NSRecursiveLock *statusesLock; // @synthesize statusesLock=_statusesLock;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property(retain, nonatomic) NSRecursiveLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property(retain) NSMutableDictionary *progressForItemID; // @synthesize progressForItemID=_progressForItemID;
@property(retain, nonatomic) iCloudDocumentLocation *contentDocumentLocation; // @synthesize contentDocumentLocation=_contentDocumentLocation;
@property(nonatomic) BOOL firstLoginAttempt; // @synthesize firstLoginAttempt=_firstLoginAttempt;
@property(retain, nonatomic) NSArray *logEntries; // @synthesize logEntries=_logEntries;
@property(nonatomic) double lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(retain, nonatomic) NSSet *containerNames; // @synthesize containerNames=_containerNames;
@property(retain, nonatomic) NSSet *entitlementFiles; // @synthesize entitlementFiles=_entitlementFiles;
@property(readonly, nonatomic) iCloud *iCloud; // @synthesize iCloud=_iCloud;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly) NSArray *transferMeasurements; // @synthesize transferMeasurements=_transferMeasurements;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)iCloudServiceCenter:(id)arg1 didDisconnectDevice:(id)arg2;
- (void)iCloudServiceCenter:(id)arg1 didConnectDevice:(id)arg2;
- (void)iCloudServiceCenter:(id)arg1 serviceAccountChanged:(id)arg2 onDevice:(id)arg3;
- (void)iCloudServiceCenter:(id)arg1 serviceStatusChanged:(int)arg2 onDevice:(id)arg3;
- (void)iCloudServiceCenter:(id)arg1 item:(id)arg2 didDownloadBytes:(long long)arg3 of:(long long)arg4 forDevice:(id)arg5;
- (void)iCloudServiceCenter:(id)arg1 item:(id)arg2 didUploadBytes:(long long)arg3 of:(long long)arg4 forDevice:(id)arg5;
- (void)iCloudServiceCenter:(id)arg1 movedItem:(id)arg2 from:(id)arg3 to:(id)arg4 onDevice:(id)arg5;
- (void)iCloudServiceCenter:(id)arg1 removedItem:(id)arg2 fromDevice:(id)arg3;
- (void)iCloudServiceCenter:(id)arg1 addedItem:(id)arg2 toDevice:(id)arg3;
- (void)iCloudServiceCenter:(id)arg1 item:(id)arg2 sizeChanged:(long long)arg3 onDevice:(id)arg4;
- (void)iCloudServiceCenter:(id)arg1 item:(id)arg2 statusChanged:(unsigned long long)arg3 onDevice:(id)arg4;
- (void)iCloudServiceCenter:(id)arg1 fetchedInitialItems:(id)arg2 fromDevice:(id)arg3;
- (void)iCloudServiceCenter:(id)arg1 didReceiveAccountInformation:(id)arg2 fromDevice:(id)arg3;
- (void)iCloud:(id)arg1 needsAppleIDAndPasswordWithCompletionBlock:(id)arg2;
- (void)addLogEntry:(id)arg1;
@property(readonly, nonatomic) NSArray *sortedDevices;
- (id)accountInformationForDevice:(id)arg1;
- (void)setAccountInformation:(id)arg1 forDevice:(id)arg2;
- (int)serverStatusForDevice:(id)arg1;
- (void)setServerStatus:(int)arg1 forDevice:(id)arg2;
- (id)rootItemForDevice:(id)arg1;
- (void)setRootItemInArray:(id)arg1 forDevice:(id)arg2;
- (void)updateDataIncludingBlueprints:(BOOL)arg1 forDevice:(id)arg2;
- (void)fetchRootItemAndAllChildrenForDevice:(id)arg1;
- (void)findBlueprints;
- (void)_getContainersFromEntitlements:(id)arg1 into:(id)arg2 forBlueprint:(id)arg3;
- (id)_resolveContainerName:(id)arg1;
- (void)_getTransferMeasurementFromItem:(id)arg1 type:(BOOL)arg2;
- (double)_progressDeltaForItem:(id)arg1 currentProgress:(double)arg2;
- (void)_transferMeasurementsTimerFired:(id)arg1;
- (void)setCurrentTransferMeasurement:(id)arg1;
- (void)_orderOutWipeAppContainerSheet;
- (BOOL)_deleteFilesFrom:(id)arg1 pathToSkip:(id)arg2;
- (void)endWipeAppContainerSheet:(id)arg1;
- (void)discloseWipeMultipleScrollView:(id)arg1;
- (void)_reenableScreenUpdates;
- (void)wipeAppContainer:(id)arg1;
- (id)_pathForContainerName:(id)arg1;
- (id)_localiCloudDirectoryPath;
- (void)fetchEvent:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
@property(retain, nonatomic) NSSet *devices;
- (id)children;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

