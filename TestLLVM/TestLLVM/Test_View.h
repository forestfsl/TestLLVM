//
//  Test_View.h
//  TestLLVM
//
//  Created by fengsl on 2020/3/20.
//  Copyright © 2020 com.GDHHL. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TestViewDelegate <NSObject>



@end

NS_ASSUME_NONNULL_BEGIN

@interface Test_View : UIView

@property (nonatomic, strong) NSDictionary *dict;
@property (nonatomic, strong) NSArray *array;
@property (nonatomic, strong) UIButton *Btn;
@property (nonatomic,weak) <TestViewDelegate> delegate;
@property (nonatomic,strong) <TestViewDelegate> delegate1;
@property (atomic, strong) NSMutableArray *TestArray;
- (void)CheckForParameter:(NSDictionary *)Paramter;

@end

NS_ASSUME_NONNULL_END
