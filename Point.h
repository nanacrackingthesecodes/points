#pragma once
class Point
{
	int x;
	int y;
public:
	Point();
	Point(int a, int b);
	void Init(int a, int b);
	void Init();
	void Print();
	static int count;
	void SetX(int a);
	void SetY(int b);
	int GetX();
	int GetY();
};
