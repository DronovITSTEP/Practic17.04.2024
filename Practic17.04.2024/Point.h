#pragma once
#include <iostream>

class Point
{
private:
	int x;
	int y;
	int z;
public:
	Point();
	// аксессоры

	//геттеры
	int getX();
	int getY();
	int getZ();
	//сеттеры
	void setX(int x);
	void setY(int y);
	void setZ(int z);

	char* print();
};

