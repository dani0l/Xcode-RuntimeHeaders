/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCSpecification.h>

@interface XCPropertyConditionFlavor : XCSpecification
{
    unsigned long long _precedence;
}

+ (id)defaultConditionFlavors;
+ (id)specificationRegistryName;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
- (long long)compare:(id)arg1;
- (unsigned long long)precedence;
- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end
