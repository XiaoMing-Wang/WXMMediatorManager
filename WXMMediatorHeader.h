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

/** 信号 */
#define WCBridgeObserve(target, signal) WXMComponentBridge.observe(target, signal)
#define WCBridgeSendSignal(signal, parameter) WXMComponentBridge.sendSignal(signal, parameter)


#endif /* WXMMediatorHeader_h */
