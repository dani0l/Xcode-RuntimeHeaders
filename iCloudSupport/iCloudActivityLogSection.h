/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEActivityLogSection.h"

@class iCloudActivityLogProvider;

@interface iCloudActivityLogSection : IDEActivityLogSection
{
    iCloudActivityLogProvider *_logProvider;
}

+ (id)defaultLogSectionDomainType;
@property(nonatomic) __weak iCloudActivityLogProvider *logProvider; // @synthesize logProvider=_logProvider;
- (void).cxx_destruct;
- (BOOL)isRecording;
- (id)navigableItem_documentType;
- (id)initLogWithTitle:(id)arg1;

@end

