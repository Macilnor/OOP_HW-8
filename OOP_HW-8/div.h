#pragma once

class DivisionByZero
{
public:
	DivisionByZero(){}
};

template <class T>
T div(T a, T b)
{
	if (b == 0)
		throw DivisionByZero();
	return a / b;
}