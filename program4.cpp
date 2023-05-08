//swapping two numbers and taking the values from the user
#include <iostream>
using namespace std;

int main(void)
{
    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;

    cout<<"Value of a before swapping is : "<<a<<endl;
    cout<<"Value of b before swapping is : "<<b<<endl;

    int temp = a;
    a = b;
    b = temp;

    cout<<"Value of a after swapping is : "<<a<<endl;
    cout<<"Value of b after swapping is : "<<b<<endl;
}
