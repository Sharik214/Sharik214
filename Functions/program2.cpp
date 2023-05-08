/*Raising a number n to a power p is the same as multiplying n by itself p times. Write a function called power() that takes a double value for n and an 
int value for p, and returns the result as a double value. Use a default argument of 2 for p, so that if this argument is omitted, the number n will be 
squared. Write a main() function that gets val- ues from the user to test this function.*/

#include <iostream>
#include <cmath>
using namespace std;
int power(double n,int p){
    int temp;
    temp = pow(n,p);
    cout<<"Value = "<<temp<<endl;
    return temp;
}
int main(){
    int n,p;
    cout<<"Enter the value of n and p : ";
    cin>>n>>p;
    power(n,p);
}
