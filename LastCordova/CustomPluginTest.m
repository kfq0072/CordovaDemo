//
//  CustomPluginTest.m
//  LastCordova
//
//  Created by hsm on 2019/5/14.
//  Copyright © 2019年 SM. All rights reserved.
//

#import "CustomPluginTest.h"

@implementation CustomPluginTest
- (void)customSelName:(CDVInvokedUrlCommand *)command {
    NSLog(@"%s______%@",__func__,command);
    
}
@end
