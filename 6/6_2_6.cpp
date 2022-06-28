#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

//可变参数
int sum(initializer_list<int> const &il)
{
    int sum = 0;
    for (auto i : il)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    auto il = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << sum(il);
    return 0;
}