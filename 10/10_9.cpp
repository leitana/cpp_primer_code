#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//排序并且删除重复单词
void elimDups(vector<string> &word)
{
    sort(word.begin(), word.end());
    auto end_unique = unique(word.begin(), word.end());
    word.erase(end_unique, word.end());
}
void print(vector<string> &word)
{
    for (auto i : word)
    {
        cout << i << " ";
    }
    cout << endl;
}

//根据长度排序 stable_sort
bool is_shorter(string const &lhs, string const &rhs)
{
    return lhs.size() < rhs.size();
}

int main()
{
    vector<string> vec = {"the", "fox", "jumps", "red", "over", "quick", "red", "slow", "the", "turtle"};
    print(vec);
    elimDups(vec);
    print(vec);
    stable_sort(vec.begin(), vec.end(), is_shorter);
    print(vec);
}