#include <iostream>
#include <string>
using namespace std;
using std::string;

int main()
{
    // string s1;
    // string s2 = s1;
    // string s3(s1);
    // string s4("value");
    // string s5 = "value";
    // string s4(10, 'c');

    // string s;
    // cin >> s;
    // cout << s << endl;

    // string s1, s2;
    // cin >> s1 >> s2;
    // cout << s1 << s2 << endl;

    //璇诲彇浣嶇疆鏁伴噺鐨剆tring
    // string word;
    // while (cin >> word)
    // {
    //     cout << word << endl;
    // }

    // getline 璇诲彇涓€鏁磋
    // string line;
    // while (getline(cin, line))
    // {
    //     // if (!line.empty())
    //     // {
    //     //     cout << line << endl;
    //     // }
    //     if (line.size() > 80)
    //     {
    //         cout << line << endl;
    //     }
    // }

    // string s = "1";
    // string s1 = s + "hello" + ";";
    // string s2 = s + ',';

    //
    // string s;
    // while (cin >> s)
    // {
    //     cout << s << endl;
    // }

    //判断字符串是否相等
    // string s1, s2;
    // while (cin >> s1 >> s2)
    // {
    //     if (s1.size() == s2.size())
    //     {
    //         cout << "两个string相等!" << endl;
    //     }
    //     else
    //     {
    //         cout << "两个string不相等" << endl;
    //         if (s1.size() > s2.size())
    //         {
    //             cout << s1 << endl;
    //         }
    //         else
    //         {
    //             cout << s2 << endl;
    //         }
    //     }
    // }

    //输入多个字符串 将它们连起来
    // string result, s;
    // while (cin >> s)
    // {
    //     result += s + " ";
    // }
    // cout << result << endl;

    //遍历string
    // string str = "some thing";
    // for (auto c : str)
    // {
    //     cout << c << endl;
    // }

    // 统计标点符号
    // string s("Hello World!!!");
    // int punct_num = 0;
    // for (auto c : s)
    // {
    //     if (ispunct(c))
    //     {
    //         ++punct_num;
    //     }
    // }
    // cout << punct_num << " 个标点符号";

    //将string变成大写
    // string s("Hello World");
    // for (auto &c : s)
    // {
    //     c = toupper(c); // c是一个引用，因此赋值语句将改变s中的字符的值
    // }
    // cout << s << endl;

    //将string变成X
    // string s("Hello World");
    // for (auto &c : s)
    // {
    //     c = 'X';
    // }
    // cout << s << endl;

    string s("Hello,World,");
    string result;
    for (auto c : s)
    {
        if (!ispunct(c))
        {
            result += c;
        }
    }
    cout << result << endl;
    return 0;
}