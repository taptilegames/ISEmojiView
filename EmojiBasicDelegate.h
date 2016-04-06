//
//  EmojiBasicDelegate.h
//  CatchAppDemo
//
//  Created by Andrew Thomas on 4/6/16.
//  Copyright © 2016 catchapp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ISEmojiView.h"

@interface ISEmojiBasicDelegate : NSObject<ISEmojiViewDelegate>
@property (nonatomic, weak) UITextField* field;
@end



@interface UITextField(Range)
@property(nonatomic, assign) NSRange selectedRange;;
@end



@interface ISEmojiView(Setup)
+(ISEmojiBasicDelegate*)addTo:(UITextField*)field;
@end
