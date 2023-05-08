#include <iostream>
using namespace std;
class MyClass
{
public:
    int value;

    MyClass(int value)
    {
        this->value = value;
    }

    bool operator<=(const MyClass &other) const
    {
        return value <= other.value;
    }

    bool operator>=(const MyClass &other) const
    {
        return value >= other.value;
    }

    bool operator==(const MyClass &other) const
    {
        return value == other.value;
    }

    MyClass operator/=(int divisor)
    {
        value /= divisor;
        return *this;
    }

    MyClass operator%=(int divisor)
    {
        value %= divisor;
        return *this;
    }
};

int main(void)
{
    MyClass a(10);
    MyClass b(20);

    cout << (a <= b) << std::endl;
    cout << (a >= b) << std::endl;
    cout << (a == b) << std::endl;

    a /= 2;
    cout << a.value << std::endl;

    b %= 3;
    cout << b.value << std::endl;
}
