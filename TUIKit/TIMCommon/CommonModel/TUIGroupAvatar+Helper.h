//
//  TUIGroupAvatar+Helper.h
//  TIMCommon
//
//  Created by wyl on 2023/4/27.
//

#import <TUICore/TUIDefine.h>

NS_ASSUME_NONNULL_BEGIN

@interface TUIGroupAvatar (Helper)

+ (UIImage *)getNormalGroupCacheAvatar:(NSString *)groupID groupType:(NSString *)groupType;

+ (void)configAvatarByParam:(NSDictionary *)param targetView:(UIImageView *)targetView;

@end

NS_ASSUME_NONNULL_END
