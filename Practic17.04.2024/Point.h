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
	// ���������

	//�������
	int getX();
	int getY();
	int getZ();
	//�������
	void setX(int x);
	void setY(int y);
	void setZ(int z);

	char* print();
};

