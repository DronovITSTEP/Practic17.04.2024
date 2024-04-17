#include <iostream>

// класс
class MyClass {
private:
    // поля класса
    int x;
    int y;
    char c;
public:
    // методы класса
    void func1(){}
    int func2() {}
    void func3(int s, char* t){}
    
    // конструктор
    MyClass(){} // по умолчанию

};

int main()
{
    MyClass obj;
    obj.func1();
}
