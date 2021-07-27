#include "Bar.h"

Ex::Ex(double a) : x(a)
{
}

double Ex::get() const
{
	return x;
}

Bar::Bar() : y(0)
{
}

void Bar::set(double a)
{
	if (y + a > 100)
	{
		throw Ex(a * y);
	}
	y = a;
}
