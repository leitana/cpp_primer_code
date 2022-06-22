#include <iostream>
#include "Sales_items.h"
using namespace std;

int main()
{
    //两个Sales_item对象相加
    // Sales_item item1, item2;
    // cin >> item1 >> item2;
    // cout << item1 + item2 << endl;
    // return 0;

    // for (Sales_item item; cin >> item; std::cout << item << std::endl)
    //     ;
    // return 0;

    Sales_item item1, item2;
    cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn())
    {
        cout << item1 + item2 << endl;
        return 0;
    }
    else
    {
        cerr << "Data must refer to same ISBN" << endl;
        return -1;
    }
}