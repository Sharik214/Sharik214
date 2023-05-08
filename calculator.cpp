#include <iostream>
using namespace std;
int sum(int a,int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}
int mult(int a, int b){
    return a * b;
}
int divi(int a,int b){
    return a / b;
}
int main(void)
{
    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    int Sum = sum(a,b);
    cout<<"Sum = "<<Sum<<endl;
    int Sub = subtract(a,b);
    cout<<"Difference = "<<Sub<<endl;
    int multi = mult(a,b);
    cout<<"Multiplication = "<<multi<<endl;
    int division = divi(a,b);
    cout<<"Division = "<<division<<endl;

    

}
