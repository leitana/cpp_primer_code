#include <string>
#include <iostream>
using namespace std;

class Screen
{
public:
    // typedef 类型别名
    // 使用类型别名等价于声明一个类型名字
    // 用来定义的类型成员必须先定义后使用，这点和普通成员有所区别。因此类型成员常常出现在类开始的地方
    typedef string::size_type pos;
    //等价于
    // using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), content(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), content(ht * wd, c) {}

    char get() const
    {
        return content[cursor];
    }
    inline char get(pos ht, pos wd) const;

    inline Screen &move(pos r, pos c);
    inline Screen &set(char c);
    inline Screen &set(pos r, pos c, char ch);

    const Screen &display(std::ostream &os) const
    {
        do_display(os);
        return *this;
    }
    Screen &display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }

    // pos Screen::size() const
    // {
    //     return height * width;
    // }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string content;

    void do_display(std::ostream &os) const { os << content; }
};

inline Screen &Screen::move(pos r, pos c)
{
    cursor = r * width + c;
}

inline Screen &Screen::set(char c)
{
    content[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos c, char ch)
{
    content[r * width + c] = ch;
    return *this;
}

int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";

    return 0;
}