#include<iostream>
#include "Point.h"
using namespace std;

Point operator+ (int a, Point& b)
{
	Point res(a + b.GetX(), a + b.GetY());
	return res;
}
Point operator- (int a, Point& b)
{
	Point res(a - b.GetX(), a - b.GetY());
	return res;
}
Point operator* (int a, Point& b)
{
	Point res(a * b.GetX(), a * b.GetY());
	return res;
}
Point operator/ (int a, Point& b)
{
	Point res(a / b.GetX(), a / b.GetY());
	return res;
}
Point operator --(Point& b)
{
	b.SetX(b.GetX() - 2);
	b.SetY(b.GetY() - 2);
	return b;
}
Point operator ++(Point& a)
{
	a.SetX(a.GetX() + 2);
	a.SetY(a.GetY() + 2);
	return a;
}
Point operator --(Point& b, int)
{
	Point temp(b.GetX(), b.GetY());
	b.SetX(b.GetX() - 2);
	b.SetY(b.GetY() - 2);
	return temp;
}
Point operator *(Point& a, int l)
{
	Point res(a.GetX() * l, a.GetY() * l);
	return res;
}
int main()
{
	Point a(1, 5), b(3, 4);
	a.Print();
	Point d= 10 + a;
	d.Print();
	--d;
	d--;
	Point a1 = 15 - a;
	Point a2 = 2 * a;
	Point a3 = 10 / a;
	Point a4 = a * 2;
	++a1;
}
