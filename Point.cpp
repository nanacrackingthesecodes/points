#include "Point.h"
#include<iostream>
using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
	cout << "Construct by default\n";
}
Point::Point(int a, int b)
{
	x = a;
	y = b;
	cout << "Construct by 2 params\n";
}
void Point::Init(int a, int b)
{
	x = a;
	y = b;
}
void Point::Init()
{
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
}
void Point::Print()
{
	cout << "X: " << x << "\tY: " << y << endl;
}
void Point::SetX(int a)
{
	x = a;
}

void Point::SetY(int b)
{
	y = b;
}

int Point::GetX()
{
	return x;
}

int Point::GetY()
{
	return y;
}
int Point::count = 0;
