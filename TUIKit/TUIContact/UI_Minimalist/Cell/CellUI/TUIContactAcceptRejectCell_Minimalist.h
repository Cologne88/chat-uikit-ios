//
//  TUIContactAcceptRejectCell_Minimalist.h
//  TUIContact
//
//  Created by wyl on 2023/1/5.
//

#import "TUICommonModel.h"
#import "TUIContactAcceptRejectCellData_Minimalist.h"
NS_ASSUME_NONNULL_BEGIN

@interface TUIContactAcceptRejectCell_Minimalist : TUICommonTableViewCell
@property (nonatomic, strong) TUIContactAcceptRejectCellData_Minimalist *acceptRejectData;
@property (nonatomic, strong) UIButton *agreeButton;
@property (nonatomic, strong) UIButton *rejectButton;
- (void)fillWithData:(TUIContactAcceptRejectCellData_Minimalist *)data;
@end

NS_ASSUME_NONNULL_END
