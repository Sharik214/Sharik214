/*Write a function called hms_to_secs() that takes three int values—for hours, minutes, and seconds—as arguments, and returns the equivalent time in
seconds (type long). Create a program that exercises this function by repeatedly obtaining a time value in hours, minutes, and seconds from the user 
(format 12:59:59), calling the function, and displaying the value of seconds it returns.*/
#include <iostream>
using namespace std;

long hms_to_sec(int hrs, int min, int sec) {
    int seconds =0;
    cout << "please enter hr,min,sec(format :(hr:min:sec)";
    cin >> hrs >>min >>sec;

    seconds = (hrs*60*60)+(min*60)+sec;
    return seconds;
}

int main(void){
    int hr,min,sec;
    int result =hms_to_sec(hr,min,sec);
    cout << "result = "<<result;
}
