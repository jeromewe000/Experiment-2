#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	int x, y;
	double z, v;
	z=2.5;
	cout << "Put the value of x: ";
	cin >> x;
	cout << "Put the value of y: ";
	cin >> y;

	if (x == 1 || x == 2)
	{
		switch (x)
		{
		case 1:

			if (y<5 && y>1)
			{
				v = x*y*z;
				cout << fixed << setprecision(2) << "V=  " << v << endl;
			}
			if (y>=5)
			{
				v = x+y/z;
				cout << fixed << setprecision(2) << "V=  " << v << endl;
			}
			break;

		case 2:

			if (y<=5)
			{
				v = abs((x-y)/z);
				cout << fixed << setprecision(2) << "V=  " << v << endl;
			}
			if (y > 5)
			{
				v=x-sqrt(y+z);
				cout << fixed << setprecision(2) << "V=  " << v << endl;
			}
			break;
		}
	}
	else
	{
		v=x+y+z;
		cout << fixed << setprecision(2) << "V=  " << v << endl;
	}
	_getch();
	return 0;
}