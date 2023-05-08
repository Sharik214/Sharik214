/*Write a function called zeroSmaller() that is passed two int arguments by reference and then sets the smaller of the two numbers to 0. Write a main() 
program to exercise this function.*/
#include <iostream>
using namespace std;
void zeroSmaller(int &a,int &b){
    if(a < b){
        a=0;
    }
    else{
        b=0;
    }
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b;
}
int main(){
    int x,y;
    cout<<"Enter the value of x and y : ";
    cin>>x>>y;
    zeroSmaller(x,y);
}
