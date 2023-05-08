/*Refer to the CIRCAREA program in Chapter 2, “C++ Programming Basics.” Write a func- tion called circarea() that finds the area of a circle in a similar
way. It should take an argument of type float and return an argument of the same type. Write a main() func- tion that gets a radius value from the user, 
calls circarea(), and displays the result.*/
#include <iostream>
using namespace std;
int circarea(float radius){
    float area;
    float pi = 3.14;
    area = pi * radius * radius;
    cout << "Area = "<<area<<endl;
    return area;
}
int main(){
    int radius;
    cout << "Enter the value  of radius : ";
    cin >> radius;
    circarea(radius);
}    
