//
//  Student.m
//  Homework2
//
//  Created by zjh on 2022/7/18.
//
#import "Student.h"
 
@implementation Student
 
- (void)study:(CGFloat)time {
    NSLog(@"study time ：%f", time);
}
 
@end

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Student * student = [[Student alloc] init];
        [student study:24.2];
    }
    return 0;
}
