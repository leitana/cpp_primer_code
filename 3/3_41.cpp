#include <iostream>
#include "string"
#include "vector"

using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> vec(begin(arr), end(arr));
    for (auto i : vec)
    {
        cout << i << " ";
    }
}