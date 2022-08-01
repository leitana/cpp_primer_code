#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    cout << v.at(0) << endl;
    cout << v[0] << endl;
    cout << v.front() << endl; //是v.front()的拷贝
    auto &c = v.front();       //是v.fornt()的引用
}