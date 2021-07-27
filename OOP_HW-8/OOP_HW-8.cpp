#include <iostream>
#include "div.h"
#include "Bar.h"
#include "Robot.h"

using namespace std;

int main()
{
	cout << "Enter two numbers: ";
	double a, b;
	cin >> a;
	cin >> b;
	try
	{
		double c = div<double>(a, b);
		cout << a << " / " << b << " = " << c << endl;
	}
	catch (DivisionByZero)
	{
		cout << "Division by zero!" << endl;
	}

	Bar bar;
	int n;
	do
	{
		cout << "Enter N: ";
		cin >> n;
		try
		{
			bar.set(n);
		}
		catch (Ex& ex)
		{
			cout << "Exception : " << ex.get()<< endl;
		}
	} while (n != 0);

	string cmd;
	Robot rob;
	do
	{
		cout << "Enter command: ";
		cin >> cmd;
		try
		{
			rob.command(cmd);
		}
		catch (OffTheField& ex)
		{
			cout << "Quiting field!" << endl << ex.get() << endl;
		}
		catch (IllegalCommand& ex)
		{
			cout << ex.get() << endl;
		}
	} while (cmd != "q" && cmd != "Q");

	return 0;
}

