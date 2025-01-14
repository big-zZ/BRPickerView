//
//  BRInfoModel.h
//  BRPickerViewDemo
//
//  Created by renbo on 2018/4/16.
//  Copyright © 2018 irenb. All rights reserved.
//
//  最新代码下载地址：https://github.com/91renb/BRPickerView

#import <Foundation/Foundation.h>

@interface BRInfoModel : NSObject
/** 姓名 */
@property (nonatomic, copy) NSString *nameStr;
/** 性别 */
@property (nonatomic, copy) NSString *genderStr;
/** 出生年月 */
@property (nonatomic, copy) NSString *birthdayStr;
/** 出生时刻 */
@property (nonatomic, copy) NSString *birthtimeStr;
/** 选择时刻 */
@property (nonatomic, copy) NSString *selectedTimeStr;
/** 联系方式 */
@property (nonatomic, copy) NSString *phoneStr;
/** 地区 */
@property (nonatomic, copy) NSString *addressStr;
/** 学历 */
@property (nonatomic, copy) NSString *educationStr;

@end
