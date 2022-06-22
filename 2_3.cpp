#include <iostream>
using namespace std;

int main()
{
    // int ival = 42;
    // int val2 = 11;
    // int *p = &ival;
    // cout << *p << endl
    //      << p << endl;
    // p = &val2;
    // cout << *p << endl
    //      << p << endl
    //      << ival << endl;

    // *p = 12;
    // cout << val2 << endl;

    // int *p1 = nullptr;
    // int *p2 = 0;
    // cout << *p2 << endl
    //      << p2 << endl;

    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    cout << i << endl;

    return 0;
}