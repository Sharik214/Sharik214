// making an equilateral triangle
#include <iostream>
using namespace std;

int main(void)
{
    int n = 5;
    for(int i = 1; i <= n; i++)
    {
	// n-i leading spaces
	for(int j = 0; j < n - i; j++){
        cout<<" ";
    }
	for(int k = 1; k <= i; k++){
         cout<<"* ";
    }
	cout<<endl;
    }

}
