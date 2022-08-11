#include <vector>
#include <iostream>
#include <memory>
using namespace std;

/**
 * @brief 重做上一题，这次使用 shared_ptr 而不是内置指针。
 *
 * @return vector<int>*
 */
shared_ptr<vector<int>> alloc_vector()
{
    return make_shared<vector<int>>();
}

void assign_vector(shared_ptr<vector<int>> p)
{
    int i;
    while (cin >> i)
    {
        p->push_back(i);
    }
}

void print_vector(shared_ptr<vector<int>> p)
{
    for (auto i : *p)
    {
        cout << i << endl;
    }
}

int main()
{
    auto p = alloc_vector();
    assign_vector(p);
    print_vector(p);
}