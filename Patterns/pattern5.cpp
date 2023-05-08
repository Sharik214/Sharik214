//inverted half-pyramid
#include <iostream>
using namespace std;

int main(void)
{
    for(int i = 1;i <= 4;i++)
    {
        for(int j = 4;j >= i;j--)
        {
            cout<<"#";
        }
        cout<<endl;
    }
}