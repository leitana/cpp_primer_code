#include <iostream>
#include <vector>
#include <string>

using namespace std;

//判断短的vector是否是长vector的前缀
bool is_prefix(vector<int> long_vec, vector<int> short_vec)
{
    if (long_vec.size() < short_vec.size())
    {
        return is_prefix(short_vec, long_vec);
    }
    for (int i = 0; i < short_vec.size(); ++i)
    {
        if (long_vec[i] != short_vec[i])
            return false;
    }
    return true;
}

int main()
{
    vector<int> s{0, 1, 1, 2};
    vector<int> l{0, 1, 1, 2, 3, 5, 8};

    cout << (is_prefix(s, l) ? "yes" : "no") << endl;
}