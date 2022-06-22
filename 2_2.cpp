#include <iostream>
using namespace std;

// string str_global;
// int int_global;

// int reused = 42;
int main()
{
    //变量声明和定义
    // int int_local;
    // string str_local;
    // cout << str_global << endl
    //      << int_global << endl
    //      << int_local << endl
    //      << str_local;

    //作用域
    // int unique = 0;
    // cout << reused << " " << unique << endl;
    // int reused = 0;
    // cout << reused << " " << unique << endl;
    // cout << ::reused << " " << unique << endl;

    int ival = 1024;
    int &refVal = ival; // refval指向ival（是ival的另一个名字）

    cout << refVal << endl;
    ival = 2048;
    cout << refVal << endl;
    return 0;
}