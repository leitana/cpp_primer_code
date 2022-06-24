#include <iostream>
#include "string"
#include "vector"
using namespace std;

int main()
{
    int arr[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}};
    //第一种 range for
    for (auto &row : arr)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
    }
    cout << endl;
    //第二种 for loop
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;

    //第三种 using pointers
    for (auto p = begin(arr); p != end(arr); ++p)
    {
        for (auto q = begin(*p); q != end(*p); ++q)
        {
            cout << *q << " ";
        }
    }
    cout << endl;
}