/* Write a program on static_cast */
#include <iostream>
using namespace std;

int main(void)
{
    int total_classes;
    cout << "Enter the total classes  : ";
    cin >> total_classes;

    int given_classes;
    cout << "Enter the classes you have given : ";
    cin >> given_classes;

    float total = static_cast<double>(given_classes) / (total_classes)*100;

    cout << "Your attendance is : " << total << endl;
}
