#include <vector>
#include "Sales_items.h"
using namespace std;

int main()
{
    // vector<string> val{"on", "the", "floor"};
    // vector<int> ivec = {1, 2, 3, 5};
    // vector<Sales_item> sales_item;
    // vector<vector<string>> file;
    // vector<int> ivec(10, 1);        // 10个1
    // vector<string> ivec2(10, "Hi"); // 10个 Hi
    // vector<int> ivec3(3);

    // vector<int> v2;
    // for (int i = 0; i < 100; ++i)
    // {
    //     v2.push_back(i);
    // }

    // vector<int> vec;
    // int i;
    // while (cin >> i)
    // {
    //     vec.push_back(i);
    // }

    // vector<string> vec;
    // string i;
    // while (cin >> i)
    // {
    //     vec.push_back(i);
    // }

    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 10};
    for (auto &x : vec)
    {
        x *= x;
    }

    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}