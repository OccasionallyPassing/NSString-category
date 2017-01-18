//
//  NSString+NormalRegex.h
//  NSStringHelper
//
//  Created by apple on 16/11/10.
//  Copyright © 2016年 Wang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (NormalRegex)

/**
 @brief 将nil或者NSNull字符串转化为@“”

 @param string 需要判断的字符串
 @return 返回结果
 */
+ (NSString *)yf_stringNilAndNullCheck:(NSString *)string;

/**
 @brief 字符串是否为空

 @param string 需要判断的字符串
 @return 判断结果
 */
+ (BOOL)isStringNilOrNullOrEmpty:(NSString *)string;

/**
 *  @brief 是否是手机号码
 *
 *  @return 判断结果
 */
- (BOOL)yf_isValidatePhone;

/**
 *  @brief 是否是中国移动
 *  移动号段: 134,135,136,137,138,139,147,150,151,152,157,158,159,
 *           170,178,182,183,184,187,188
 *  @return 判断结果
 */
- (BOOL)yf_isChinaMobile;

/**
 *  @brief 是否是中国联通
 *  联通号段: 130,131,132,145,155,156,170,171,175,176,185,186
 *  @return 判断结果
 */
- (BOOL)yf_isChinaUnicom;

/**
 *  @brief 是否是中国电信
 *  电信号段: 133,149,153,170,173,177,180,181,189
 *  @return 判断结果
 */
- (BOOL)yf_isChinaTelecom;

/**
 *  @brief 手机号所属运营商
 *
 *  @return 判断结果
 */
- (NSString *)yf_getPhontNumType;
/**
 *  @brief 邮箱
 *
 *  @return 判断结果
 */
- (BOOL)yf_isValidateEmail;

/**
 *  @brief 简单的身份证验证
 *  
 *  @return 判断结果
 */
- (BOOL)yf_simpleVerifyIdentityCardNum;

/**
 @brief 精确的身份证验证

 @return 判断结果
 */
+ (BOOL)yf_accurateVerifyIDCardNumber:(NSString *)value;

/**
 *  @brief 过滤字符串中间和两边的空格
 *
 *  @param string 要过滤的字符串
 *
 *  @return 返回结果
 */
+ (NSString *)FilterSpaceString:(NSString *)string;
/**
 *  @brief 隐藏掉姓名的第一个字
 *
 *  @param name 姓名
 *
 *  @return 返回结果
 */
+ (NSString*)PersonNameSecret:(NSString*)name;

/**
 *  @brief 去掉小数点后面多余的0
 *
 *  @param floatValue 要处理的小数
 *
 *  @return 返回结果
 */
+ (NSString *)stringDisposeWithFloat:(NSString *)floatValue;
/**
 *  @brief 隐藏银行卡号中间的数字，前4后6 剩下＊
 *
 *  @param cardNum 银行卡号
 *
 *  @return 返回结果
 */
+ (NSString*)bankCardNumSecret:(NSString*)cardNum;
/**
 *  去除字符串中包含的空格
 *
 *  @param str 字符串
 *
 *  @return 去除空格后的字符串
 */
- (NSString *)removingSapceString:(NSString *)str;
/**
 *  根据长度计算分组的个数
 *
 *  @param length 长度
 *
 *  @return 分组的个数
 */
- (NSInteger)groupCountWithLength:(NSInteger)length;
/**
 *  给定字符串根据指定的个数进行分组，每一组用空格分隔
 *
 *  @param string 字符串
 *
 *  @return 分组后的字符串
 */
- (NSString *)groupedString:(NSString *)string;
/**
 @brief 是否是银行卡

 @return 验证结果
 */
- (BOOL)yf_bankCardluhmCheck;

/**
 @brief 车牌号

 @return 判断结果
 */
- (BOOL)yf_isCarNumber;

/**
 @brief 纯汉字

 @return 判断结果
 */
- (BOOL)yf_isValidChinese;

/**
 @brief 纯数字

 @return 判断结果
 */
- (BOOL)yf_isValidDegitalNumber;

/**
 @brief IP地址有效性

 @return 判断结果
 */
- (BOOL)yf_isIPAddress;

/**
 *  Mac地址有效性
 */
- (BOOL)yf_isMacAddress;

/**
 *  网址有效性
 */
- (BOOL)yf_isValidUrl;

/**
 *  邮政编码
 */
- (BOOL)yf_isValidPostalcode;

/**
 *  工商税号
 */
- (BOOL)yf_isValidTaxNo;

/**
 @brief 是否符合最小长度、最大长度，是否包含中文、首字母是否为数字（可以为纯数字或者字母）
 @param minLenth 账号最小长度
 @param maxLenth 账号最大长度
 @param containChinese 是否能包含中文
 @param firstCannotBeDigtal 首字符不能为数字
 @return 判断结果
 */
- (BOOL)yf_isValidWithMinLenth:(NSInteger)minLenth
                      maxLenth:(NSInteger)maxLenth
                containChinese:(BOOL)containChinese
           firstCannotBeDigtal:(BOOL)firstCannotBeDigtal;

/**
 @brief     是否符合最小长度、最长长度，是否包含中文,数字，字母，其他字符，首字母是否可以为数字
 @param     minLenth 账号最小长度
 @param     maxLenth 账号最长长度
 @param     containChinese 是否包含中文
 @param     containDigtal   是否必须包含数字
 @param     containLetter   是否必须包含字母
 @param     containOtherCharacter   其他字符eg：！@#￥%&
 @param     firstCannotBeDigtal 首字母不能为数字
 @return    正则验证成功返回YES, 否则返回NO
 */
- (BOOL)yf_isValidWithMinLenth:(NSInteger)minLenth
                      maxLenth:(NSInteger)maxLenth
                containChinese:(BOOL)containChinese
                 containDigtal:(BOOL)containDigtal
                 containLetter:(BOOL)containLetter
         containOtherCharacter:(NSString *)containOtherCharacter
           firstCannotBeDigtal:(BOOL)firstCannotBeDigtal;

/**
 @brief 计算字符串的字节长度

 @param strtemp 需要计算的字符串
 @return 返回的字节数
 */
- (int)stringConvertToInt:(NSString*)strtemp;

@end
