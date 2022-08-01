#include <string>
#include <deque>
#include <iostream>
using namespace std;

/**
 * @brief
 * 从标准输入读取string序列，存入一个deque中。编写一个循环，用迭代器打印deque中的元素。
 * @return int
 */
int main()
{
    deque<string> input;
    string str;
    while (cin >> str)
    {
        input.push_back(str);
    }
    // for (string str; cin >> str; input.push_back(str))
    //     ;
    for (auto iter = input.cbegin(); iter != input.cend(); ++iter)
    {
        cout << *iter << endl;
    }
}