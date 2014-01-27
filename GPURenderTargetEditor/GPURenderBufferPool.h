/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, GPURenderBuffer, NSArray, NSMutableDictionary;

// Not exported
@interface GPURenderBufferPool : NSObject <DVTInvalidation>
{
    NSMutableDictionary *_renderbufferDictionary;
    _Bool _powerOf2ZoomClamping;
    NSArray *_allActiveBuffers;
    NSArray *_activeColorBuffers;
    GPURenderBuffer *_activeDepthBuffer;
    GPURenderBuffer *_activeStencilBuffer;
}

+ (void)initialize;
@property(readonly, nonatomic) GPURenderBuffer *activeStencilBuffer; // @synthesize activeStencilBuffer=_activeStencilBuffer;
@property(readonly, nonatomic) GPURenderBuffer *activeDepthBuffer; // @synthesize activeDepthBuffer=_activeDepthBuffer;
@property(readonly, nonatomic) NSArray *activeColorBuffers; // @synthesize activeColorBuffers=_activeColorBuffers;
@property(readonly, nonatomic) NSArray *allActiveBuffers; // @synthesize allActiveBuffers=_allActiveBuffers;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, nonatomic) BOOL hasColorData;
@property(readonly, nonatomic) BOOL hasStencilData;
@property(readonly, nonatomic) BOOL hasDepthData;
- (void)enableRenderbuffersWithRenderJobs:(id)arg1 attachmentInfos:(id)arg2;
- (void)setRenderbufferViewCoordinator:(id)arg1;
- (id)initWithContextMenu:(id)arg1 traceEditor:(id)arg2 infoDelegate:(id)arg3;
- (void)_renderbufferForAttachment:(unsigned int)arg1 contextMenu:(id)arg2 traceEditor:(id)arg3 infoDelegate:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
