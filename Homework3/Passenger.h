//
//  Passenger.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject

@property (nonatomic, copy) NSString *PassengerName;
//乘客姓名
@property (nonatomic, copy) Address *Departureplace;
//出发地
@property (nonatomic, copy) Address *Destination;
//目的地
@property (nonatomic, assign) NSDate *Starttime;
//发车时间
@property (nonatomic, assign) NSDate *Endtime;
//到达时间
@property (nonatomic, copy) NSNumber *Trainnumber;
//车次
@property (nonatomic, copy) NSNumber *Seat;
//座位
-(instancetype)initOrder:(NSString *) PassengerName Departureplace:(Address *) Departureplace Destination:(Address *) Destination Starttime:(nonnull NSDate *) Starttime Endtime:(nonnull NSDate *) Endtime Trainnumber:(NSNumber *)Trainnumber Seat:(NSNumber *) Seat;
@end

@interface Passenger : Person
// @property 属性

@property (nonatomic, assign) BOOL ifAdult;
// 是否年满 18 岁
@property (nonatomic, assign) NSMutableArray *HistoryOrder;
// 历史订单 （数组）
@property (nonatomic, assign) NSMutableArray *OutstandingOrder;
// 未出行订单 （数组）

// Function 方法
-(void) Booking:(Orders *) order;
// 去订票
-(void) Ticketcheck:(Orders *)order;
// 去检票

@end

NS_ASSUME_NONNULL_END

