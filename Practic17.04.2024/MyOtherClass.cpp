#include "MyOtherClass.h"

void MyOtherClass::print() {
	cout << x << " " << y;
}
MyOtherClass::MyOtherClass(int x, int y) {
	// this для уточнения кто является переменной класса
	this->x = x;
	this->y = y;
}

int MyOtherClass::sum() {
	return x + y;
}