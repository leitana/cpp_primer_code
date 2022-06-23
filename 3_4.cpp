#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
 * @brief 迭代器
 *
 * @return int
 */
int main()
{
    // string s("some string");
    //将第一个字母大写
    // if (s.begin() != s.end())
    // {
    //     auto it = s.begin();
    //     *it = toupper(*it);
    // }
    // cout << s << endl;

    //将第一个单词变成大写 用迭代器
    // for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
    // {
    //     *it = toupper(*it);
    // }

    //依次输入text，直至遇到空白。因为没像元素中写值，所以用的cbegin (const_iterator)
    // vector<string> text = {"hello", "world"};
    // for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it)
    // {
    //     cout << *it << endl;
    // }

    //创建一个含有10个整数的vector对象，然后使用迭代器将所有元素的值都变成原来的两倍。输出vector对象的内容，检验程序是否正确。
    vector<int> val(10, 3);
    for (auto it = val.begin(); it != val.end(); ++it)
    {
        *it *= 2;
    }
    for (auto it : val)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}