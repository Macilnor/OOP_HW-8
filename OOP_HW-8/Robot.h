#pragma once
#include <string>

using namespace std;

class OffTheField
{
private:
	int x;
	int y;
	string dir;
public:
	OffTheField(int a, int b, string d);
	string get() const;
};

class IllegalCommand
{
private:
	string cmd;
public:
	IllegalCommand(string c);
	string get() const;
};

class Robot
{
private:
	int x, y;
public:
	Robot();

	void left();
	void right();
	void up();
	void down();

	void command(string cmd);
};

