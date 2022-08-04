#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool predicate(string &s)
{
    return s.size() >= 5;
}

int main()
{
    auto v = vector<string>{"a", "as", "aasss", "aaaaassaa", "aaaaaabba", "aaa"};
    auto pivot = partition(v.begin(), v.end(), predicate);

    for (auto it = v.cbegin(); it != pivot; ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}