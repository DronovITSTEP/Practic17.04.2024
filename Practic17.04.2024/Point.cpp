#include "Point.h"

Point::Point() {
	x = y = z = 0;
}

//геттеры
int Point::getX(){
	return x;
}
int Point::getY() {
	return y;
}
int Point::getZ() {
	return z;
}
//сеттеры
void Point::setX(int x) {
	this->x = x;
}
void Point::setY(int y) {
	this->y = y;
}
void Point::setZ(int z) {
	this->z = z;
}

char* Point::print() {
	char point[50];
	strcpy_s(point, "x = ");
	char temp[10];
	_itoa_s(x, temp, 10);
	strcat_s(point, temp);
	strcat_s(point, ", y = ");
	_itoa_s(y, temp, 10);
	strcat_s(point, temp);
	strcat_s(point, ", z = ");
	_itoa_s(z, temp, 10);
	strcat_s(point, temp);
	return point;
}