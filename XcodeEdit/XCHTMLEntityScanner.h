/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XcodeEdit/XCBlockScanner.h>

@class NSDictionary;

@interface XCHTMLEntityScanner : XCBlockScanner
{
    NSDictionary *entityMap;
}

- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(struct _NSRange)arg5 dirtyRange:(struct _NSRange *)arg6;
- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end

