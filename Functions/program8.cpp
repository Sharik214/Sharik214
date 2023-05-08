/*Write a function called swap() that interchanges two int values passed to it by the call- ing program. (Note that this function swaps the values of the
variables in the calling pro- gram, not those in the function.) You’ll need to decide how to pass the arguments. Create a main() program to exercise this
function.*/

#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a,b;
    cout<<"Enter the value of x and y : ";
    cin>>a>>b;
    swap(a,b);
    cout<<"Value of a after swapping is "<<a<<endl;
    cout<<"Value of b after swapping is "<<b;
}
