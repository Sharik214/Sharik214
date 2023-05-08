#include <iostream>
using namespace std;
class Person
{
public:
    Person(string name, int age) : name_(name), age_(age) {}

    bool operator>(const Person &other) const
    {
        return age_ > other.age_;
    }

    string name() const
    {
        return name_;
    }

    int age() const
    {
        return age_;
    }

private:
    string name_;
    int age_;
};

int main()
{
    Person person1("Alice", 25);
    Person person2("Bob", 30);

    if (person1 > person2)
    {
        cout << person1.name() << " is older than " << person2.name() << std::endl;
    }
    else
    {
        cout << person2.name() << " is older than " << person1.name() << std::endl;
    }
}
