使用 Objective-C来自定义一个Student 类

```objective-c
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
```

```objective-c
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
        [st study:24.2];
    }
    return 0;
}
```

