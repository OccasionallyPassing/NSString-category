//
//  NSString+YFReverseString.m
//  NSStringHelper
//
//  Created by apple on 16/11/9.
//  Copyright © 2016年 Wang. All rights reserved.
//

#import "NSString+YFReverseString.h"

@implementation NSString (YFReverseString)

+ (NSString *)yf_reverseString:(NSString *)strSrc
{
    NSMutableString* reverseString = [[NSMutableString alloc] init];
    NSInteger charIndex = [strSrc length];
    while (charIndex > 0) {
        charIndex --;
        NSRange subStrRange = NSMakeRange(charIndex, 1);
        [reverseString appendString:[strSrc substringWithRange:subStrRange]];
    }
    return reverseString;
}

@end
