#include <string>
#include <iostream>
#include <vector>
using namespace std;

int sum_for_int(vector<string> const &v)
{
    int sum = 0;
    for (auto const &s : v)
    {
        sum += stoi(s);
    }
    return sum;
}
float sum_for_float(std::vector<std::string> const &v)
{
    float sum = 0.0;
    for (auto const &s : v)
        sum += std::stof(s);
    return sum;
}
int main()
{
    vector<string> v = {"1", "2", "3", "4.5"};
    cout << sum_for_int(v) << endl;
}