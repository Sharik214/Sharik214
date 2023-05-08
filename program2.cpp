#include <iostream>
using namespace std;
int main()
{
       float ammount=0, british = 1.487, franc = 0.172, deutsche = 0.584, yen = 0.00955;
       cout << "Enter the ammount in US Dollar == ";
       cin >> ammount;
       cout << "British == " << ammount*british << endl
              << "French == " << ammount*franc << endl
              << "German == " << deutsche*ammount << endl
              << "Japanese == " << ammount*yen << endl;
       return 0;

}
