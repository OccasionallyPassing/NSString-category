//
//  NSString+YFPinyin.h
//  NSStringHelper
//
//  Created by apple on 16/11/9.
//  Copyright © 2016年 Wang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (YFPinyin)
/**
 @ brief the Chinese Pinyin string of the nsstring
 Method	                    Result
 Original	                @"中文"
 pinyinWithPhoneticSymbol	@"zhōng wén"
 pinyin	                    @"zhong wen"
 pinyinArray	            @[@"zhong", @"wen"]
 pinyinWithoutBlank	        @"zhongwen"
 pinyinInitialsArray	    @[@"z", @"w"]
 pinyinInitialsString	    @"zw"
 */
- (NSString*)yf_pinyinWithPhoneticSymbol;
- (NSString*)yf_pinyin;
- (NSArray*)yf_pinyinArray;
- (NSString*)yf_pinyinWithoutBlank;
- (NSArray*)yf_pinyinInitialsArray;
- (NSString*)yf_pinyinInitialsString;

@end
