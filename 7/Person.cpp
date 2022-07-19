#include <string>
#include <iostream>
using namespace std;

struct Person
{
    string name;
    string address;

public:
    string const &get_name() const { return name; }
    string const &get_addr() const { return address; }
};

istream &read(istream &is, Person &person)
{
    return is >> person.name >> person.address;
}

ostream &print(ostream &os, const Person &person)
{
    return os << person.name << " " << person.address;
}

int main()
{
    Person p;
    // p.get_name();
    p.get_addr();
}