#include <iostream>
using namespace std;
int main(){
    float celsius,convert;
    cout<<"Enter the temperature in celsius : ";
    cin>>celsius;
    convert=(celsius * 9/5)+32;
    cout<<"Temperature in farenheit is : "<<convert;
    return 0;
}
