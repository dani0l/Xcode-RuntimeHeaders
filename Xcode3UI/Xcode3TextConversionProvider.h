/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTDiffTextFilter-Protocol.h"

@interface Xcode3TextConversionProvider : NSObject <DVTDiffTextFilter>
{
}

+ (id)pathToKeyConflictResolutionFromInputFilePath:(id)arg1 error:(id *)arg2;
+ (id)pathToTextFileFromInputFilePath:(id)arg1 error:(id *)arg2;
+ (id)textFileDataTypeForInputFilePath:(id)arg1;
+ (BOOL)pathRequiresFilter:(id)arg1;

@end
