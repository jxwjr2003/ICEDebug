//
//  ICEDebugsubviews.h
//  ICEDebug
//
//  Created by wujianrong on 2018/6/14.
//  Copyright © 2018年 wanda. All rights reserved.
//

#import "ICEDebugBaseCommand.h"

@interface ICEDebugsubviews : ICEDebugBaseCommand
+(NSString*)allSubvews:(UIView*)view;
@end