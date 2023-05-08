/*
Repeat Exercise 8, but instead of two int variables, have the swap() function inter-
change two struct time values (see Exercise 6).
*/
#include <iostream>
using namespace std;

struct Time{
    int hours, mins, secs;
};

void swap(Time&, Time&);

int main(void){
    Time t1, t2;
    cout << "Values for T-1" << endl;
    cout << "Enter hours: ";
    cin >> t1.hours;
    
    cout << "Enter minutes: ";
    cin >> t1.mins; 
    
    cout << "Enter seconds: ";
    cin >> t1.secs;

    cout << "Values for Time-2" << endl;
    cout << "Enter hours: ";
    cin >> t2.hours;
    
    cout << "Enter minutes: ";
    cin >> t2.mins; 
    
    cout << "Enter seconds: ";
    cin >> t2.secs;

    swap(t1, t2);
    cout << "After swap:" << endl;
    cout << "Equivalent in HH:MM:SS format\nTime-1: " << t1.hours << ":" << t1.mins << ":" << t1.secs << "\nTime-2: "
    << t2.hours << ":" << t2.mins << ":" << t2.secs << endl;
}

void swap(Time& t1, Time& t2){
    t1.hours = t1.hours+t2.hours;
    t2.hours = t1.hours-t2.hours;
    t1.hours = t1.hours-t2.hours;

    t1.mins = t1.mins+t2.mins;
    t2.mins = t1.mins-t2.mins;
    t1.mins = t1.mins-t2.mins;
    
    t1.secs = t1.secs+t2.secs;
    t2.secs = t1.secs-t2.secs;
    t1.secs = t1.secs-t2.secs;
}
