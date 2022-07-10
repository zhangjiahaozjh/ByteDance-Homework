# 一、按顺序打印出App、ViewController生命周期的各个事件

## 1.APP的生命周期

点击程序图标->执行main函数->通过UIApplicationMain函数->初始化UIApplication对象,并且为它设置代理对象开启消息循环->事件监听（应用程序加载完毕->应用程序获取焦点->应用程序进入前台->应用程序收到内存警告，可能种植->应用程序失去焦点->应用程序进入后台->应用程序即将终止）->程序结束退出

## 2.ViewController的生命周期

alloc(创建对象，分配空间) -> init(初始化对象，初始化数据) -> awakeFromNib(所有视图的outlet和action已经连接，但还没有被确定) -> loadView(完成一些关键的view的初始化工作，加载view) -> viewDidLoad(载入完成，可以进行自定义数据以及动态创建其他控件) -> viewWillAppear(视图将出现在屏幕之前) -> viewWillLayoutSubviews(将要对子视图进行调整) -> viewDidLayoutSubviews(对子视图调整完毕) -> viewDidAppear(视图已在屏幕上渲染完成) ->viewWillDisappear(视图将从屏幕上移除) -> viewDidDisappear(视图已经被从屏幕上移除) -> dealloc(视图被销毁)

# 二、写出五种常用的UI控件

UIScrollView：一个可显示超过其屏幕大小的UI控件，允许滚动和缩放其包含的视图

UITableView：一个使用单列来显示数据的视图，只支持纵向移动

UICollectionView：一个管理数据项的有序集合，并使用可定制的布局来显示它们的对象

UIWebView&WKWebView：显示网页

# 三、列举出三个UITableViewDelegate声明的方法

1.选中某行cell调用此方法

```
(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
```

2.自定义每组头部的view 需要使用到UITableViewHeaderFooterView

```
(UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section; 
```

3.自定义每组尾部的View 需要使用到UITableViewHeaderFooterView

```
(UIView *)tableView:(UITableView *)tableView viewForFooterInSection:(NSInteger)section;
```




