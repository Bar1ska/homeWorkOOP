#include <string>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <cmath>
using namespace std;

class Complex 
{
public:
    Complex() = default;
    Complex(int x, int y)
    {
        xNum = x;
        yNum = y;
    }
    Complex(const Complex& obj) 
    {
        zNum = obj.zNum;
        xNum = obj.xNum;
        yNum = obj.yNum;
    }
    ~Complex() {}
    void input() 
    {
        cout << "Введите обычное число : ";
        cin >> xNum;
        cout << "Введите обычное число : ";
        cin >> yNum;
    }
    Complex operator+(const Complex& obj) 
    {
        return Complex(xNum+obj.xNum, yNum + obj.yNum);
    }
    Complex operator-(const Complex& obj)
    {
        return Complex(xNum - obj.xNum, yNum - obj.yNum);
    }
    Complex operator*(const Complex& obj)
    {
        return Complex(xNum * obj.xNum - yNum * obj.yNum, xNum * obj.yNum - yNum * obj.xNum);
    }
private:
    int xNum, yNum;
    float zNum;
    void calculationZ() 
    {
        zNum = sqrt(xNum * xNum + yNum * yNum);
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

