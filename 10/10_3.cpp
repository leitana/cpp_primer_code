#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};
    // 求vector<int> 元素之和
    cout << "10.3: " << accumulate(v.cbegin(), v.cend(), 0) << endl;

    // 因为 第三个参数是 int 所以结果也是int
    vector<double> vd = {1.1, 0.5, 3.3};
    cout << "ex 10.4: "
         << accumulate(vd.cbegin(), vd.cend(), 0)
         << endl;
}