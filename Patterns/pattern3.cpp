//making mario pyramid less-comfortable
#include <iostream>
using namespace std;

int main(void)
{
    for(int i = 1;i <= 4;i++)
    {
        for(int space = 0;space <= 4 - i - 1;space++)
        {
            cout<<" ";
        }
        for(int j = 1;j <= i;j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
}
