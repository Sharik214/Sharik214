//making two structures as given
#include <iostream>
#include <string>
using namespace std;
struct Distance //English distance
 {
 int feet;
 float inches;
 };
struct Volume    
{   
 Distance width;
 Distance height;
 Distance length;
};
float ToFoot(Distance x)
{
return (x.feet+x.inches/12.);
}
int main( )
{
 Volume room;
 cout<<"Input height (feet, inches): ";
 cin>> room.height.feet>>room.height.inches;
 cout<<"Input width (feet, inches): ";
 cin>> room.width.feet>>room.width.inches;
 cout<<"Input length (feet, inches): ";
 cin>> room.length.feet>>room.length.inches;
 float
V=ToFoot(room.height)*ToFoot(room.width)*ToFoot(room.length);
 cout<<"Volume of room is "<<V<<" solid foot";
return 0;
}

