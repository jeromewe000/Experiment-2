#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()

{

	char a;
	int x, y;
	cout << "Please choose your subscription package\n";
	cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n";
	cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.\n";
	cout << "Package C: For P1995/mo of unlimited access is provided.\n";
	cout << "Enter a letter : ";
	cin >> a;

	switch (a)
	{
	case 'A':
	case 'a':
		cout << "Please input the number of hours of access: ";
		cin >> x;
		if (x <= 10)
			cout << "Your Bill is : P" << 995;
		else if (x > 10)

			cout << "Your bill is : P" << (x - 10) * 20 + 995;
		else
			cout << "Invalid";
		break;

	case 'B':
	case 'b':
		cout << "Please input the number of hours of access: ";
		cin >> x;
		if (x <= 20)
			cout << "Your Bill is : P" << 1495;
		else if (x > 20)
			cout << "Your bill is : P" << (x - 20) * 10 + 1495;
		else
			cout << "Invalid";
		break;

	case 'C':
	case 'c':
		cout << "Your bill is : P1995";
		break;
	default:
		cout << "Invalid Input";
	}

	_getch();

	return 0;

}
