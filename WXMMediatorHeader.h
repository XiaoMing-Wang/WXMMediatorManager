//
//  WXMMediatorHeader.h
//  Multi-project-coordination
//
//  Created by wq on 2019/12/25.
//  Copyright © 2019 wxm. All rights reserved.
//

#ifndef WXMMediatorHeader_h
#define WXMMediatorHeader_h

#import "WXMMediator.h"
#import "WXMMediatorBridge.h"
#import "WXMMediatorBridgeData.h"
#import "WXMMediatorBridgeContext.h"
#import "WXMMediatorBaseService.h"
#import "WXMMediatorConfiguration.h"
#import "WXMMediatorServiceManager.h"

/** 定义信号 */
#define WMSIGNAL_DEFINE_STATIC(signal, describe) \
class NSObject; static WXM_MEDIATOR_SIGNAL const signal = (@#signal);

/** 信号 */
#define WMBridgeObserve(target, signal) WXMMediatorBridge.observe(target, signal)
#define WMBridgeSend(signal, parameter) WXMMediatorBridge.sendSignal(signal, parameter)

/** 创建Service */
#define WMService(class) \
[[WXMMediatorServiceManager sharedInstance] serviceForClass:class dependObject:self]

/** 消息转发 */
#define WXMMEDIATOR_PERFORM(target) [self performTarget:target action:NSStringFromSelector(_cmd)];

/** 错误对象 */
#define WMError(code, message, object) [WXMMediatorError error:code message:message object:object];

/** 宏 */
#define WXMDEBUG DEBUG
#define WXMMediatorCrashBegin  @try {
#define WXMMediatorCrashEnd    } @catch (NSException *exception) {} @finally {}
#define weakifyself autoreleasepool {} __weak typeof(self) self_weak = self;
#define strongifyself autoreleasepool {} __strong __typeof(self_weak) self = self_weak;
#endif /* WXMMediatorHeader_h */
