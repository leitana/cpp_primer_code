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

    //读取位置数量的string
    // string word;
    // while (cin >> word)
    // {
    //     cout << word << endl;
    // }

    // getline 读取丢�整行
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

    //�ж��ַ����Ƿ����
    // string s1, s2;
    // while (cin >> s1 >> s2)
    // {
    //     if (s1.size() == s2.size())
    //     {
    //         cout << "����string���!" << endl;
    //     }
    //     else
    //     {
    //         cout << "����string�����" << endl;
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

    //�������ַ��� ������������
    // string result, s;
    // while (cin >> s)
    // {
    //     result += s + " ";
    // }
    // cout << result << endl;

    //����string
    // string str = "some thing";
    // for (auto c : str)
    // {
    //     cout << c << endl;
    // }

    // ͳ�Ʊ�����
    // string s("Hello World!!!");
    // int punct_num = 0;
    // for (auto c : s)
    // {
    //     if (ispunct(c))
    //     {
    //         ++punct_num;
    //     }
    // }
    // cout << punct_num << " ��������";

    //��string��ɴ�д
    // string s("Hello World");
    // for (auto &c : s)
    // {
    //     c = toupper(c); // c��һ�����ã���˸�ֵ��佫�ı�s�е��ַ���ֵ
    // }
    // cout << s << endl;

    //��string���X
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