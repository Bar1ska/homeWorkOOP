#include <string>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <conio.h>
#include <fstream>
#include <stdio.h>
using namespace std;

class Decimal 
{
public:
    Decimal() = default;
    Decimal(const int& numeratorObj, const int& denominatorObj) 
    {
        numerator = numeratorObj;
        denominator = denominatorObj;
    };
    Decimal(const Decimal& obj) 
    {
        numerator = obj.numerator;
        denominator = obj.denominator;
    };
    ~Decimal() {};

    void input() 
    {
        cin >> numerator;
        cout << "——" << endl;
        cin >> denominator;
    }
    
    Decimal operator+(const Decimal& point) const 
    {
        int newNumerator = numerator * point.denominator + point.numerator * denominator;
        int newDenominator = denominator * point.denominator;
        return Decimal(newNumerator, newDenominator);
    }

    Decimal operator-(const Decimal& point) const
    {
        int newNumerator = numerator * point.denominator - point.numerator * denominator;
        int newDenominator = denominator * point.denominator;
        return Decimal(newNumerator, newDenominator);
    }

    Decimal operator*(const Decimal& point) const
    {
        int newNumerator = numerator * point.numerator;
        int newDenominator = denominator * point.denominator;
        return Decimal(newNumerator, newDenominator);
    }

    Decimal operator/(const Decimal& point) const
    {
        int newNumerator = numerator * point.denominator;
        int newDenominator = denominator * point.numerator;
        return Decimal(newNumerator, newDenominator);
    }
private:
    int numerator, denominator;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

