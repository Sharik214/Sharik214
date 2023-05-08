/*Write a function that takes two Distance values as arguments and returns the larger one. Include a main() program that accepts two Distance values
from the user, compares them, and displays the larger.*/

#include <iostream>
using namespace std;
int distance(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int d1,d2;
    cout<<"Enter the value of d1 and d2 : ";
    cin>>d1>>d2;
    int temp = distance(d1,d2);
    cout<<"a = "<<d1<<endl;
    cout<<"b = "<<d2<<endl;
    cout<<"Maximum distance = "<<temp;
}
