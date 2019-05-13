#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float a, b, c;
	
	do{
		cout << "Please input unpaid balance; if none please input 0 \n";
		cin >> b;
		if ( b<0)
			cout<< "Sorry negative inputs are Invalid, Please try again.\n";
		else {
			cout << " How many gallons comsumed?\n";
			cin >> a;
			
			if (b == 0)
				c = 35 + a * 1.10;
			if (b > 0)
				c = b + 55 + a * 1.10;
		
			cout << "Your total bill is : P" << c;
			
		}	
	}while ( b<0);
	
	
_getch();
return 0;
}
