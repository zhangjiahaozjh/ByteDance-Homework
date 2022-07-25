//
//  Passenger.m
//  College Demo
//
//  Created by zjh on 2022/7/25.
//

#import "Passenger.h"


@implementation Orders//仿照person类

-(instancetype)initOrder:(NSString *)PassengerName Departureplace:(Address *)Departureplace Destination:(Address *)Destination Starttime:(NSDate *)Starttime Endtime:(NSDate *)Endtime Trainnumber:(NSNumber *)Trainnumber Seat:(NSNumber *)Seat{
    if(self = [super init]){
        [self createOrder:PassengerName Departureplace:Departureplace Destination:Destination Starttime:Starttime Endtime:Endtime Trainnumber:Trainnumber Seat:Seat];
    }
    return self;
}

-(void)createOrder:(NSString *)PassengerName Departureplace:(Address *)Departureplace Destination:(Address *)Destination Starttime:(NSDate *)Starttime Endtime:(NSDate *)Endtime Trainnumber:(NSNumber *)Trainnumber Seat:(NSNumber *)Seat{
    self.PassengerName=PassengerName;
    self.Departureplace=Departureplace;
    self.Destination=Destination;
    self.Starttime=Starttime;
    self.Endtime=Endtime;
    self.Trainnumber=Trainnumber;
    self.Seat=Seat;
}

@end

@implementation Passenger

- (void) Booking:(Orders *)order{
    [self.OutstandingOrder addObject:order];
}

- (void) Ticketcheck:(Orders *)order{
    
    if(_OutstandingOrder != nil && ![_OutstandingOrder isKindOfClass:[NSNull class]] && _OutstandingOrder.count != 0){
        [self.OutstandingOrder removeObject:order];
    }else{
        NSLog(@"error");
    }
    [self.HistoryOrder addObject:order];
}

@end
