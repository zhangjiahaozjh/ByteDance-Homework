### 1.按顺序打印出App、ViewController生命周期的各个事件

#### 一、APP的生命周期

点击程序图标->执行main函数->通过UIApplicationMain函数->初始化UIApplication对象并且为它设置代理对象->开启消息循环与事件监听->程序结束退出

#### 二、ViewController的生命周期

分配内存并初始化（alloc/init）->视图加载完成（loadView）->将要展示（viewDidLoad）->将要布局子视图（viewWillAppear）->已经布局子视图（viewDidAppear）->将要消失（viewWillDisappear）->已经消失（viewDidDisappear）->销毁释放（dealloc）



当一个视图控制器被创建，并在屏幕上显示的时候。 代码的执行顺序： 1、 alloc：创建对象，分配空间 2、init (initWithNibName) ：初始化对象，初始化数据 3、loadView ：从nib载入视图 ，通常这一步不需要去干涉。除非你没有使用xib文件创建视图 4、viewDidLoad ：载入完成，可以进行自定义数据以及动态创建其他控件 5、viewWillAppear ：视图将出现在屏幕之前，马上这个视图就会被展现在屏幕上了 6、viewDidAppear ：视图已在屏幕上渲染完成

当一个视图被移除屏幕并且销毁的时候的执行顺序，这个顺序差不多和上面的相反： 1、viewWillDisappear ：视图将被从屏幕上移除之前执行 2、viewDidDisappear ：视图已经被从屏幕上移除，用户看不到这个视图了 3、dealloc ：视图被销毁，此处需要对你在init和viewDidLoad中创建的对象进行释放

### 2.写出五种常用的UI控件

UIScrollView、UITableView、UICollectionView、UIWebView&WKWebView、UINavigationBar

### 3.列举出三个UITableViewDelegate声明的方法

1.继承UIViewController，实现UITableViewDataSource和UITableViewDelegate协议

```
@interface UserInfoViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>{

}
@end
```

2.继承UITableViewController,UITableViewController默认实现UITableViewDataSource和UITableViewDelegate协议

```
@interface UserInfoViewController : UITableViewController

@end
```

3.自定义每组尾部的View 需要使用到UITableViewHeaderFooterView

```
(UIView *)tableView:(UITableView *)tableView viewForFooterInSection:(NSInteger)section;
```



