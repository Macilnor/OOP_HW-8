#include "Robot.h"

Robot::Robot() : x(0), y(0)
{
}

void Robot::left()
{
	if (x <= 0)
		throw OffTheField(x,y,"left");
	x--;
}

void Robot::right()
{
	if (x >= 10)
		throw OffTheField(x, y, "right");
	x++;
}

void Robot::up()
{
	if (y >= 10)
		throw OffTheField(x, y, "up");
	y++;
}

void Robot::down()
{
	if (y <= 0)
		throw OffTheField(x, y, "down");
	y--;
}

void Robot::command(string cmd)
{
	if (cmd == "up")
		up();
	else if (cmd == "down")
		down();
	else if (cmd == "right")
		right();
	else if (cmd == "left")
		left();
	else
		throw IllegalCommand(cmd);
}

OffTheField::OffTheField(int a, int b, string d) : x(a), y(b), dir(d)
{
}

string OffTheField::get() const
{
	string out = "X : " + to_string(x);
	out += " | Y : " + to_string(y);
	out += " | Direction : " + dir;
	return out;
}

IllegalCommand::IllegalCommand(string c) : cmd(c)
{
}

string IllegalCommand::get() const
{
	string out = "Illegal comand : " + cmd;
	return out;
}
