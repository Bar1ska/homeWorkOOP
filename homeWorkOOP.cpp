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
    int numerator, denominator;
    void input() 
    {
        cin >> numerator;
        cout << "——" << endl;
        cin >> denominator;
    }
    void addition(int& numerator1, int& denominator1) 
    {
        denominator *= denominator1;
        numerator = numerator * denominator1 + numerator1 * denominator;
    }
    void subtraction(int& numerator1, int& denominator1)
    {
        denominator *= denominator1;
        numerator = numerator * denominator1 - numerator1 * denominator;
    }
    void multiplication(int& numerator1, int& denominator1)
    {
        denominator *= denominator1;
        numerator *= numerator1;
    }
    void division(int& numerator1, int& denominator1)
    {
        denominator *= numerator1;
        numerator *= denominator1;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

