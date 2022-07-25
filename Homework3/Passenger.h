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
//�˿�����
@property (nonatomic, copy) Address *Departureplace;
//������
@property (nonatomic, copy) Address *Destination;
//Ŀ�ĵ�
@property (nonatomic, assign) NSDate *Starttime;
//����ʱ��
@property (nonatomic, assign) NSDate *Endtime;
//����ʱ��
@property (nonatomic, copy) NSNumber *Trainnumber;
//����
@property (nonatomic, copy) NSNumber *Seat;
//��λ
-(instancetype)initOrder:(NSString *) PassengerName Departureplace:(Address *) Departureplace Destination:(Address *) Destination Starttime:(nonnull NSDate *) Starttime Endtime:(nonnull NSDate *) Endtime Trainnumber:(NSNumber *)Trainnumber Seat:(NSNumber *) Seat;
@end

@interface Passenger : Person
// @property ����

@property (nonatomic, assign) BOOL ifAdult;
// �Ƿ����� 18 ��
@property (nonatomic, assign) NSMutableArray *HistoryOrder;
// ��ʷ���� �����飩
@property (nonatomic, assign) NSMutableArray *OutstandingOrder;
// δ���ж��� �����飩

// Function ����
-(void) Booking:(Orders *) order;
// ȥ��Ʊ
-(void) Ticketcheck:(Orders *)order;
// ȥ��Ʊ

@end

NS_ASSUME_NONNULL_END

