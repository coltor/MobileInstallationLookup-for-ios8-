//
//  BrowseAllInstalledApplication.h
//  iosAsst
//
//  Created by peter_peng on 14-10-10.
//  Copyright (c) 2014年 www.iphonezs.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BrowseAllInstalledApplication : NSObject

#pragma mark-
#pragma mark- get all installed app
+ (NSMutableArray *)browseInstalledAppList;

#pragma mark
#pragma mark- get installed app icon with identifier image default size 122x122
+ (UIImage *)appIconImageForBundleIdentifier:(NSString *)bundleId;
@end
