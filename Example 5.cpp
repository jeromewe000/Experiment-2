#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
	int a, b, c;
	a = 0;
	b = 1;
	c = 0;

	while (c <= 10) 
	{
		cout << a << "," << b;
		if (c < 10)
			cout << ",";

		a = a + b;
		b = a + b;
		c++;
	}
	_getch();
	return 0;
}
