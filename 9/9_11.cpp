#include <vector>
#include <list>
using namespace std;

int main()
{
    vector<int> vec1;                // 0
    vector<int> vec2(10);            // 10个0
    vector<int> vec3(10, 1);         // 10个1
    vector<int> vec4{1, 2, 3, 4, 5}; // 1,2,3,4,5
    vector<int> vec5(vec3);
    vector<int> vec6(vec3.begin(), vec3.end());

    list<int> ilist(5, 4);
    vector<int> ivc(5, 4);
    vector<double> dvc(ilist.begin(), ilist.end());
    vector<double> dvc2(ivc.begin(), ivc.end());
}
