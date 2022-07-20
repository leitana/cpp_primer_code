#include <string>
#include <iostream>
using namespace std;

struct Person
{
    friend istream &read(istream &is, Person &person);
    friend ostream &print(ostream &os, const Person &person);

private:
    string name;
    string address;

public:
    Person() = default;
    Person(const string sname, const string saddr) : name(sname), address(saddr) {}
    // Person(const string sname, const string saddr)
    // {
    //     name = sname;
    //     address = saddr;
    // }
    Person(istream &is) {}

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