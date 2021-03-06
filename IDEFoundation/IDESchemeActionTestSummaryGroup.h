/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

#import "IDESchemeActionTestSummaryContainer-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface IDESchemeActionTestSummaryGroup : IDESchemeActionAbstractTestSummaryObject <IDESchemeActionTestSummaryContainer>
{
    NSMutableArray *_subtests;
    NSString *_identifier;
}

+ (void)initialize;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) NSMutableArray *mutableContainedTestSummaries;
@property(readonly) NSArray *containedTestSummaries;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)addNewTestSummaryGroupWithName:(id)arg1 identifier:(id)arg2;
- (id)addNewTestSummaryWithName:(id)arg1 identifier:(id)arg2 status:(unsigned long long)arg3;
- (unsigned long long)status;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2;

// Remaining properties
@property(copy) NSMutableArray *mutableSubtests; // @dynamic mutableSubtests;
@property(copy) NSString *name;
@property(copy) NSArray *subtests; // @dynamic subtests;

@end

