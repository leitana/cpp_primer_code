#include <iostream>
using namespace std;

int main()
{
    //编写一个lambda，接收两个int，返回他们的和
    auto f = [](int i, int j)
    { return i + j; };

    //编写一个 lambda ，捕获它所在函数的 int，并接受一个 int参数。lambda 应该返回捕获的 int 和 int 参数的和。
    int x = 10;
    auto f = [x](int i)
    { i + x; };

    //编写一个 lambda，捕获一个局部 int 变量，并递减变量值，直至它变为0。一旦变量变为0，再调用lambda应该不再递减变量。lambda应该返回一个bool值，指出捕获的变量是否为0。
    int i = 10;
    auto j = [&i]() -> bool
    { return (i == 0 ? true : !(i--)); };
    while (!j())
    {
        cout << i << endl;
    }
}
