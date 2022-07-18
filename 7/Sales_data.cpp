#include <iostream>
#include <string>
using namespace std;

struct Sales_data
{
    string isBn() const { return bookNo; };
    Sales_data &combine(const Sales_data &);
    double avg_price() const;
    string bookNo;
    unsigned unit_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.unit_sold >> total.revenue)
    {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.unit_sold >> trans.revenue)
        {
            if (total.bookNo == trans.bookNo)
            {
                total.unit_sold += trans.unit_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                cout << total.bookNo << " " << total.unit_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.unit_sold << " " << total.revenue << endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
}