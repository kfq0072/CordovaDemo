//
//  CustomPluginTest.h
//  LastCordova
//
//  Created by hsm on 2019/5/14.
//  Copyright © 2019年 SM. All rights reserved.
//

#import "CDVPlugin.h"

NS_ASSUME_NONNULL_BEGIN

@interface CustomPluginTest : CDVPlugin
- (void)customSelName:(CDVInvokedUrlCommand *)command;
@end

NS_ASSUME_NONNULL_END
