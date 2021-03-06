/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFilePath, IDELaunchSession, NSArray, NSError, NSMutableArray, NSString;

@interface IDEExecutionTracker : NSObject
{
    NSString *_statusDisplayName;
    DVTFilePath *_statusImageFilePath;
    IDELaunchSession *_launchSession;
    NSMutableArray *_subtrackers;
    BOOL _isFinished;
    NSError *_error;
}

+ (void)initialize;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(retain) DVTFilePath *statusImageFilePath; // @synthesize statusImageFilePath=_statusImageFilePath;
@property(retain) NSString *statusDisplayName; // @synthesize statusDisplayName=_statusDisplayName;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (id)description;
- (void)setStatusDisplayName:(id)arg1 statusImageFilePath:(id)arg2;
- (void)addSubtracker:(id)arg1;
- (void)_updateIsFinished;
- (void)cancel;
@property(readonly) BOOL statusChanged;
- (id)init;

// Remaining properties
@property(readonly) NSMutableArray *mutableSubtrackers; // @dynamic mutableSubtrackers;
@property(readonly) NSArray *subtrackers; // @dynamic subtrackers;

@end

