
//  Created by Tencent on 2023/06/09.
//  Copyright © 2023 Tencent. All rights reserved.
/**
 *
 *
 *  This document declares the TUIBubbleMessageCell_Minimalist class.
 *  Bubble messages, the most common type of messages that contain strings and emoticons.
 *  Both TUIFileMessageCell_Minimalist and TUIVoiceMessageCell_Minimalist inherit from this class and implement the userinterface of bubble messages.
 *  If developers want to customize the bubble message, they can also refer to the implementation methods of the above two message units to implement their own
 * bubble message unit.
 */
#import "TUIBubbleMessageCellData.h"
#import "TUIMessageCell_Minimalist.h"

NS_ASSUME_NONNULL_BEGIN

@interface TUIBubbleMessageCell_Minimalist : TUIMessageCell_Minimalist

/**
 *  The bubble image view, the message's bubble icon, wraps the message's content on the UI as a background panel for the bubble.
 */
@property(nonatomic, strong) UIImageView *bubbleView;
@property(nonatomic, strong) TUIBubbleMessageCellData *bubbleData;

- (void)fillWithData:(TUIBubbleMessageCellData *)data;

+ (CGFloat)getBubbleTop:(TUIBubbleMessageCellData *)data;

@end

#pragma mark - TUILayoutConfiguration

@interface TUIBubbleMessageCell_Minimalist (TUILayoutConfiguration)

/**
 *  Send bubble icon (normal state)
 *  - The send icon of the bubble, assigned to the @bubble when the bubble message was sent.
 */
@property(nonatomic, class) UIImage *outgoingBubble;

/**
 *  Send bubble icon (normal state)
 *  - The send icon of the bubble, assigned to the @bubble when the bubble message was sent.
 */
@property(nonatomic, class) UIImage *outgoingSameBubble;

/**
 *  Send bubble icon (highlighted state)
 *  - The send icon (highlighted state) of the bubble, assigned to @highlightedBubble when the bubble message was sent.
 */
@property(nonatomic, class) UIImage *outgoingHighlightedBubble;

/**
 * Send bubble icon (highlighted state)
 */
@property(nonatomic, class) UIImage *outgoingAnimatedHighlightedAlpha20;
@property(nonatomic, class) UIImage *outgoingAnimatedHighlightedAlpha50;

/**
 *
 *  Receive bubble icon (normal state)
 *  - The receive icon of the bubble, assigned to the @bubble when the bubble message was received.
 */
@property(nonatomic, class) UIImage *incommingBubble;

/**
 *
 *  Receive bubble icon (normal state)
 *  - The receive icon of the bubble, assigned to the @bubble when the bubble message was received.
 */
@property(nonatomic, class) UIImage *incommingSameBubble;

/**
 *
 *  Receive bubble icon (highlighted state)
 *  - The receive icon of the bubble, assigned to @highlightedBubble when the bubble message was received.
 */
@property(nonatomic, class) UIImage *incommingHighlightedBubble;

/**
 * 
 * Receive bubble icon (highlighted state)
 */
@property(nonatomic, class) UIImage *incommingAnimatedHighlightedAlpha20;
@property(nonatomic, class) UIImage *incommingAnimatedHighlightedAlpha50;

/**
 *  Spacing at the top of the send bubble
 *  - It is used to locate the top of the sent bubble, and is assigned to @bubbleTop when the bubble message was sent.
 */
@property(nonatomic, class) CGFloat outgoingBubbleTop;

/**
 *  Spacing at the top of the receiving bubble
 *  - It is used to locate the top of the receive bubble, and is assigned to @bubbleTop when the bubble message was received.
 */
@property(nonatomic, class) CGFloat incommingBubbleTop;

@end

NS_ASSUME_NONNULL_END
