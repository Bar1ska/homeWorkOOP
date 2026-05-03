#include <string>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <conio.h>
#include <fstream>
#include <stdio.h>
using namespace std;

class Line
{
public:
    std::vector <char> str;
    void getStr()
    {
        while ((symbol = getchar()) != '\n')
        {
            str.push_back(symbol);
        }
    }
    int giveSize()
    {
        return str.size();
    }
    void deleteLine()
    {
        str.clear();
    }
    void adding(std::vector <char> str2)
    {
        for (int i = 0; i < str2.size(); ++i)
        {
            str.push_back(str2[i]);
        }
    }
    bool checkEquality(std::vector<char> str2) 
    {
        if (giveSize() != str2.size()) 
        {
            return false;
        }
        for (int i = 0; i < giveSize(); ++i) 
        {
            if (str[i] != str2[i]) 
            {
                return false;
            }
        }
        return true;
    }
    Line() = default;
    Line(const std::vector <char> str2) 
    {
        str = str2;
    }
    Line(const Line& obj)
    {
        str = obj.str;
    }
    ~Line() 
    {
        deleteLine();
    }
private:
    char symbol;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

