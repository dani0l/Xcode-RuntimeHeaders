/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

@class NSMutableArray, NSString, NSTextField;

@interface IDECapsuleFooterView : DVTLayoutView_ML
{
    NSMutableArray *_buttons;
    NSTextField *_labelField;
}

- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)layoutTopDown;
@property(copy) NSString *label;
- (id)addButtonWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
