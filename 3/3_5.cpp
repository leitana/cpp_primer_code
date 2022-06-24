#include <iostream>
#include "vector"
#include "string"
using namespace std;

int main()
{
    // int array[10];
    // for (auto i = 0; i < 10; ++i)
    // {
    //     array[i] = i;
    // }
    // for (auto i : array)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // int arr[10];
    // for (int i = 0; i < 10; ++i)
    // {
    //     arr[i] = array[i];
    // }

    vector<int> vec(10);
    for (int i = 0; i < 10; ++i)
    {
        vec[i] = i;
    }
    vector<int> vec2(vec); // vector可以直接赋值
    for (auto v : vec2)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}