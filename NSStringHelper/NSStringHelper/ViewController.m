//
//  ViewController.m
//  NSStringHelper
//
//  Created by apple on 16/11/9.
//  Copyright © 2016年 Wang. All rights reserved.
//

#import "ViewController.h"
#import "NSString+YFPinyin.h"
#import "NSString+YFSize.h"
#import "NSString+YFReverseString.h"
#import "NSString+JKTrims.h"
#import "NSString+NormalRegex.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *labelHeight;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    NSString *str = @"康晴晴fjdsflksdfksdjkflsdfj安静的法律框架房快乐<marquee><xmp></xmp></marquee>的房间爱对方   可垃圾";
    NSLog(@"\n%@,\n%@,\n%@,\n%@,\n%@,\n%@",[str yf_pinyin],[str yf_pinyinWithPhoneticSymbol],[str yf_pinyinArray],[str yf_pinyinWithoutBlank],[str yf_pinyinInitialsArray],[str yf_pinyinInitialsString]);
    [str yf_pinyin];
    
    
    NSString *reverseStr = [NSString yf_reverseString:str];
    CGSize size = [reverseStr yf_sizeWithFont:self.label.font constrainedToWidth:self.label.frame.size.width];
    self.label.text = reverseStr;
    self.labelHeight.constant = size.height;
    
    NSLog(@"%@",[str jk_trimmingWhitespace]);
    NSString *jsonStr = @"6214820130002907560";
    NSLog(@"%@,",[NSString bankCardNumSecret:jsonStr]);
    NSLog(@"%@",[jsonStr yf_bankCardluhmCheck]?@"YES":@"NO");
    
    NSString *IDCard = @"412326199208286079";
    NSLog(@"%@",[IDCard yf_simpleVerifyIdentityCardNum]?@"YES":@"NO");
    NSLog(@"%@",[NSString yf_accurateVerifyIDCardNumber:IDCard]?@"YES":@"NO");
    
    NSString *accountStr = @"aaaaaaaaaaaaaaaaaa1a";
    BOOL result = [accountStr yf_isValidWithMinLenth:4 maxLenth:20 containChinese:NO firstCannotBeDigtal:NO];
    NSLog(@"\n%@\n,%ld",result?@"YES":@"NO",accountStr.length);
    
    BOOL result1 = [accountStr yf_isValidWithMinLenth:4 maxLenth:20 containChinese:YES containDigtal:NO containLetter:YES containOtherCharacter:@"+%^&*<@" firstCannotBeDigtal:NO];
    NSLog(@"\n%@\n,%ld",result1?@"YES":@"NO",accountStr.length);
    
    NSString *IPStr = @"255.4.5.6";
     NSLog(@"ip = %@", [IPStr yf_isIPAddress]?@"YES":@"NO");
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
