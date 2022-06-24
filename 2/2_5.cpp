#include <iostream>
using namespace std;

int main()
{
    typedef double wages;
    wages i = 3.14;

    int j = 1, &r = j;
    auto a = r;
    cout << a << endl;
    return 0;
}