#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int i, j;
    cin >> i >> j;
    try
    {
        if (j == 0)
        {
            throw runtime_error("divisor is 0");
        }
        cout << i / j << endl;
    }
    catch (runtime_error err)
    {
        std::cerr << err.what() << '\n';
    }

    return 0;
}