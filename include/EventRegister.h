//
//  EventRegister.h
//  DemoTouch
//
//  Created by 李军帅 on 2017/3/10.
//
//

#ifndef EventRegister_h
#define EventRegister_h

/*定义了消息事件的名字*/
//消息通信Port
#define MESSAGE_PORT      "com.DBI.DemoTWeak"
#define HOME_PRESS  "pressDBIHome"
#define OPEN_URL    "openDBIURL"



/*一些文件配置定义，如果需要UI必和UI工程师协商一下路径*/
/*必须是mobile权限的sprngboard能访问的*/
#define FIFO_FILEPATH   @"/private/var/mobile/Media/DBI/FIFO"
#endif /* EventRegister_h */
