#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout<<"Enter the value of n : "; 
    cin>>n;

    for(int i = 1;i <= 10;i++)
    {
        int product = n * i;
        cout<<"The value of n is : "<<product<<endl;
    }
}
