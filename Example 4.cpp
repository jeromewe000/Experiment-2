#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	
	int a = 0;
	cout << "counting...\n";
	while (a < 10) 
	{
		cout << a;
		cout << ",";
		a++;
	}
	while (a <= 28) 
	{
		cout << a << ",";
		a = a + 2;
	}
	while (a == 30)
	{
		cout << a;
		a = a + 2;
	}

	_getch();
	return 0;
}