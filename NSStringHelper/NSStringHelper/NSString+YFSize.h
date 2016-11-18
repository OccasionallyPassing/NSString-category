//
//  NSString+YFSize.h
//  NSStringHelper
//
//  Created by apple on 16/11/9.
//  Copyright © 2016年 Wang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (YFSize)
/**
 *  @brief Calculate the height of the text
 *
 *  @param font  Font (default system font)
 *  @param width Constraint width
 */
- (CGFloat)yf_heightWithFont:(UIFont *)font constrainedToWidth:(CGFloat)width;
/**
 *  @brief Calculate the width of the text
 *
 *  @param font   Font (default system font)
 *  @param height constraint height
 */
- (CGFloat)yf_widthWithFont:(UIFont *)font constrainedToHeight:(CGFloat)height;

/**
 *  @brief Calculate the size of the text
 *
 *  @param font  Font (default system font)
 *  @param width Constraint width
 */
- (CGSize)yf_sizeWithFont:(UIFont *)font constrainedToWidth:(CGFloat)width;
/**
 *  @brief Calculate the size of the text
 *
 *  @param font   Font (default system font)
 *  @param height constraint height
 */
- (CGSize)yf_sizeWithFont:(UIFont *)font constrainedToHeight:(CGFloat)height;

@end
