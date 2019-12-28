//
//  WXMMediatorConfiguration.h
//  Multi-project-coordination
//
//  Created by wq on 2019/12/24.
//  Copyright © 2019 wxm. All rights reserved.
//
@class WXMMediatorError;
@class WXMMediatorSignal;
@class WXMMediatorBaseService;
#ifndef WXMMediatorConfiguration_h
#define WXMMediatorConfiguration_h

/** target添加的信号字典 */
#define WXMMEDIATOR_SIGNAL_KEY @"__WXMMEDIATOR_SIGNAL_KEY__"

/** callback绑定sign */
#define WXMMEDIATOR_SIGNAL_CALLBACK @"__WXMMEDIATOR_SIGNAL_CALLBACK__"

/** service释放block */
#define WXMMEDIATOR_REMOVE_CALLBACK @"__WXMMEDIATOR_REMOVE_CALLBACK__"


typedef NSString *WXM_MEDIATOR_SIGNAL NS_STRING_ENUM;
typedef void (^WXMSignalCallBack) (id object);
typedef void (^WXMObserveCallBack) (WXMMediatorSignal *signal);
typedef void (^WXMServiceCallBack) (WXMMediatorError *response);
typedef void (^WXMFreeServiceCallBack) (WXMMediatorBaseService *service);

#endif /* WXMMediatorConfiguration_h */
