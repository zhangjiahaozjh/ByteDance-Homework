//
//  Student.h
//  Homework2
//
//  Created by zjh on 2022/7/18.
//

#ifndef Student_h
#define Student_h
#import <Foundation/Foundation.h>
@interface Student : NSObject
{
    NSString * name;
    NSString * major;
    int age;
}

- (void)study:(CGFloat)time;
 
@end
#endif /* Student_h */
