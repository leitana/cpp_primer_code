#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 3;
    double d = 3.14;
    i *= static_cast<int>(d); //显式转换

    cout << i;
}