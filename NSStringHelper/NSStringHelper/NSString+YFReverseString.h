//
//  NSString+YFReverseString.h
//  NSStringHelper
//
//  Created by apple on 16/11/9.
//  Copyright © 2016年 Wang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (YFReverseString)
/**
 *  @brief ReverseString
 *
 *  @param strSrc The string that will be reversed
 *
 *  @return Reversed string
 */
+ (NSString *)yf_reverseString:(NSString *)strSrc;

@end
