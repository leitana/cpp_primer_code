#include <iostream>
using namespace std;

int fact(int i)
{
    if (i < 0)
    {
        std::runtime_error err("Input cannot be a negative number");
        std::cout << err.what() << std::endl;
    }
    return i > 1 ? i * fact(i - 1) : 1;
}

int main()
{
    std::cout << std::boolalpha << (120 == fact(5)) << std::endl;
    return 0;
}

//局部静态对象
int cout_call()
{
    static int ctr = 0; // 调用结束后这个值依然有效
    return ++ctr;
}

/**
 * @brief 程序输出1-10
 *
 * @return int
 */
int main()
{
    for (int i = 0; i < 10; ++i)
    {
        cout << cout_call() << endl;
    }
    return 0;
}