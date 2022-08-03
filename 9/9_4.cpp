#include <vector>
using namespace std;

/**
 * @brief
 * 接受一对指向vector<int>的迭代器和一个int值。
 * 在两个迭代器指定的范围中查找给定的值，返回一个布尔值来指出是否找到。
 * @param begin
 * @param end
 * @param i
 * @return true
 * @return false
 */
bool find(vector<int>::const_iterator begin, vector<int>::const_iterator end, int i)
{
    while (begin++ != end)
    {
        if (*begin == i)
        {
            return true;
        }
    }
    return false;
}

/**
 * @brief
 * 返回一个迭代器指向找到的元素。
 * @param begin
 * @param end
 * @param i
 * @return vector<int>::const_iterator
 */
vector<int>::const_iterator find2(vector<int>::const_iterator begin,
                                  vector<int>::const_iterator end, int i)
{
    while (begin != end)
    {
        if (*begin == i)
        {
            return begin;
        }
        ++begin;
    }
    return end;
}