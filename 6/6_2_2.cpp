#include <iostream>

using namespace std;

//传递引用参数
void reset(int &i)
{
    i = 0;
}

int main()
{
    int j = 42;
    reset(j);
    cout << j;
}