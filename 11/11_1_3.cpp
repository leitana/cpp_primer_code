#include <iostream>
#include <map>
#include <string>
using namespace std;
//单词计数程序
int main()
{
    map<string, int> word_count;
    string tmp;
    while (cin >> tmp)
    {
        word_count[tmp] += 1;
    }

    for (const auto &elem : word_count)
    {
        cout << elem.first << " : " << elem.second << endl;
    }
}