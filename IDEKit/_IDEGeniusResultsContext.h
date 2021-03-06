/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDEGeniusResultsGraphNode, IDENavigableItem, NSString;

@interface _IDEGeniusResultsContext : NSObject <DVTInvalidation>
{
    NSString *_geniusCategory;
    IDENavigableItem *_geniusRootNavigableItem;
    IDEGeniusResultsGraphNode *_geniusResultsGraphNode;
}

+ (void)initialize;
@property(retain, nonatomic) IDENavigableItem *geniusRootNavigableItem; // @synthesize geniusRootNavigableItem=_geniusRootNavigableItem;
@property(copy) NSString *geniusCategory; // @synthesize geniusCategory=_geniusCategory;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

