#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // 判断输入的分数在哪个区间
    // vector<int> val(11, 0);
    // int gradle;
    // while (cin >> gradle)
    // {
    //     if (gradle <= 100)
    //     {
    //         ++val[gradle / 10];
    //     }
    // }
    // for (auto x : val)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    vector<string> val;
    string s;
    while (cin >> s)
    {
        val.push_back(s);
    }
    for (auto &x : val)
    {
        for (auto &c : x)
        {
            c = toupper(c);
        }
    }
    for (auto i : val)
    {
        cout << i << endl;
    }

    return 0;
}