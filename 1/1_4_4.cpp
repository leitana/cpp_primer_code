#include <iostream>
using namespace std;

int main()
{
    int currVal = 0, val = 0;
    if (cin >> currVal)
    {
        int cnt = 1; //保存正在处理当前值个数
        while (cin >> val)
        {
            if (val == currVal)
            {
                ++cnt;
            }
            else
            {
                cout << currVal << " occurs " << cnt << " times " << endl;
                currVal = val; //记住新值
                cnt = 1;       //重置计数器
            }
        }
        //打印最后一个值的个数
        cout << currVal << " occurs " << cnt << " times " << endl;
    }
}