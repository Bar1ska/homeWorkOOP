#include <string>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;

class AutoMassive 
{
public:
    template <typename A> A peak(std::vector<A> mass)
    {
        A num = 0;
        for (int i = 0; i < mass.size(); ++i)
        {
            if (num < mass[i])
            {
                num = mass[i];
            }
        }
        return num;
    }
    template <typename A> A least(std::vector<A> mass) 
    {
        A num = peak(mass);
        for (int i = 0; i < mass.size(); ++i)
        {
            if (num > mass[i]) 
            {
                num = mass[i];
            }
        }
        return num;
    }
    template <typename A> std::vector<A> bublePop(std::vector<A> mass) 
    {
        A num;
        int amount = 1;
        while (amount != 0) 
        {
            amount = 0;
            for (int i = 0; i < mass.size(); ++i) 
            {
                if (i - 1 > mass.size() - 1) 
                {
                    if (mass[i] > mass[i + 1]) 
                    {
                        num = mass[i];
                        mass[i] = mass[i + 1];
                        mass[i + 1] = num;
                        ++amount;
                    }
                }
                else 
                {
                    if (mass[i] < mass[i - 1])
                    {
                        num = mass[i];
                        mass[i] = mass[i - 1];
                        mass[i - 1] = num;
                        ++amount;
                    }
                }
            }
        }
        return mass;
    }
    template <typename A> bool search(A target, std::vector <A> mass) 
    {
        mass = bublePop(mass);
        return binary_search(mass.begin(), mass.end(), target);
    }
    template <typename A> std::vector <A> swap(A targetNum, A newNum, std::vector <A> mass) 
    {
        if (search(targetNum, mass)) 
        {
            int ind = find(mass.begin(), mass.end(), targetNum);
            mass[ind] = newNum;
        }
        return mass;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    AutoMassive m;
    std::vector <int> massive = m.bublePop(std::vector <int> {2,1,4});
    for (int i = 0; i < massive.size(); ++i) 
    {
        cout << massive[i] << endl;
    }
}

