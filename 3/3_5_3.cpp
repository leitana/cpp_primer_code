#include <iostream>
#include "string"
#include "vector"
using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int *p = arr;

    // int *end = &arr[10];
    // for (int *b = arr; b != end; ++b)
    // {
    //     cout << *b << " ";
    // }

    // int *beg = begin(arr); // 指向arr首元素指针
    // int *last = end(arr);  //指向arr尾元素的下一位置指针

    // int ia[] = {0, 2, 4, 6, 8};
    // int i = ia[2]; // ia转换成指向数组首元素的指针
    //                // ia[2] 得到[ia+2]所指元素
    // int *p = ia;
    // i = *(p + 2);

    int *last = end(arr);
    for (int *b = arr; b != last; ++b)
    {
        *b = 0;
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}