#include <iostream>
#include  <conio.h>
using namespace std;

int main()
{
	int a, b, c;
	c = 0;
	cout << "Enter a number : ";
	cin >> a;
	for (b = 0; b <= a; b++)
	{
		c = b + c;
	}
	
	cout << "The sum of all whole numbers from 1 to " << a << " is : " << c;
	_getch();
	return 0;
}
