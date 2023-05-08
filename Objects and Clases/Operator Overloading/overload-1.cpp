#include <iostream>
using namespace std;
class Arith_num
{
private:
    int num;

public:
    void input()
    {
        num = 20;
    }
    Arith_num operator+(Arith_num &ob)
    {
        Arith_num A;
        A.num = num + ob.num;
        return (A);
    }
    Arith_num operator-(Arith_num &ob)
    {
        Arith_num A;

        A.num = num - ob.num;
        return (A);
    }
    Arith_num operator*(Arith_num &ob)
    {
        Arith_num A;

        A.num = num * ob.num;
        return (A);
    }

    Arith_num operator/(Arith_num &ob)
    {
        Arith_num A;
        A.num = num / ob.num;
        return (A);
    }
    void print()
    {
        cout << num;
    }
};
int main(void)
{
    Arith_num x1, y1, res;
    x1.input();
    y1.input();

    res = x1 + y1;
    cout << " Addition : ";
    res.print();

    res = x1 - y1;
    cout << " \n \n Subtraction : ";
    res.print();

    res = x1 * y1;
    cout << " \n \n Multiplication : ";
    res.print();

    res = x1 / y1;
    cout << " \n \n Division : ";
    res.print();
}