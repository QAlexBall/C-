# 线程管理

### 线程管理的基础
每个程序至少有一个线程:执行main()函数的线程,其余线程有其各自的入口函数。线程与原
始线程(以main()为入口函数的线程)同时运行。如同main()函数执行完会退出一样,当线程执
行完入口函数后,线程也会退出。在为一个线程创建了一个std::thread对象后,需要等待这个线程结束;不过,线程需要先进行启动。

### 启动线程
使用C++线程库启动线程,可以归结为构造std::thread对象
```c++
void do_some_work();
std::thread my_thread(do_some_work);
```
为了让编译器识别std::thread类,这个简单的例子也要包含<thread>头文件.
如同大多数C++标准库一样,std::thread可以用可调用类型构造,将带有函数调用符类型的实例传入std::thread类中,替换默认的构造函数
```cpp
class background_task {
public:
    void opetator()() const {
        do_something();
        do_something_else();
    }
};

background_task f;
std::thread my_thread(f);        
```