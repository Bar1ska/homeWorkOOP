#include <string>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <conio.h>
using namespace std;


class AutoServise 
{
public:
    void adding()
    {
        system("CLS");
        cout << "Введите название автомобиля -> ";
        cin >> name;
        nameAuto.push_back(name);
        cout << "Введите год релиза автомобиля -> ";
        cin >> year;
        yearOfRealise.push_back(year);
        cout << "Введите объем мотора автомобиля -> ";
        cin >> volume;
        volumeEngine.push_back(volume);
        cout << "Введите цену автомобиля -> ";
        cin >> price;
        priceAuto.push_back(price);
    }
    void print(int i = 0)
    {
        if (i == 0)
        {
            cout << "name auto | year of realise | volume engine | price auto" << endl;
            for (int i = 0; i < nameAuto.size(); ++i)
            {
                cout << nameAuto[i] << " | ";
                cout << yearOfRealise[i] << " | ";
                cout << volumeEngine[i] << " | ";
                cout << priceAuto[i] << endl;
            }
        }
        else 
        {
            cout << "name auto | year of realise | volume engine | price auto" << endl;
            --i;
            cout << nameAuto[i] << " | ";
            cout << yearOfRealise[i] << " | ";
            cout << volumeEngine[i] << " | ";
            cout << priceAuto[i] << endl;
        }
        system("pause");
    }
    void remove(int ind) 
    {
        system("CLS");
        nameAuto.erase(nameAuto.begin() + ind);
        yearOfRealise.erase(yearOfRealise.begin() + ind);
        volumeEngine.erase(volumeEngine.begin() + ind);
        priceAuto.erase(priceAuto.begin() + ind);
        cout << "Измененный контейнер: " << endl;
        print();
    }
    void search() 
    {
        system("CLS");
        cout << "Выберите по какой категории проводить поиск:" << endl;
        cout << "1. название машины" << endl;
        cout << "2. гор релиза" << endl;
        cout << "3. объем двигателя" << endl;
        cout << "4. цена" << endl;
        cin >> choise;
        amount = 0;
        switch (choise)
        {
        case 1:
            cout << "Введите имя автомобиля: ";
            cin >> name;
            for (int i = 0; i < nameAuto.size(); ++i)
            {
                if (name == nameAuto[i])
                {
                    cout << "Что сделать с найденным элементом?" << endl;
                    cout << "Удалить -> d" << endl;
                    cout << "Вывести -> p" << endl;
                    cin >> strChoise;
                    amount += 1;
                    switch (strChoise)
                    {
                    case 'p':
                        print(++i);
                        break;
                    case 'd':
                        remove(i);
                        break;
                    }
                    
                }
            }
            if (amount == 0)
            {
                cout << "Ничего не было найдено!" << endl;
            }
            break;

        case 2:
            cout << "Введите год релиза: ";
            cin >> year;
            for (int i = 0; i < yearOfRealise.size(); ++i)
            {
                if (year == yearOfRealise[i])
                {
                    cout << "Что сделать с найденным элементом?" << endl;
                    cout << "Удалить -> d" << endl;
                    cout << "Вывести -> p" << endl;
                    cin >> strChoise;
                    amount += 1;
                    switch (strChoise)
                    {
                    case 'p':
                        print(++i);
                        break;
                    case 'd':
                        remove(i);
                        break;
                    }
                }
            }
            if (amount == 0)
            {
                cout << "Ничего не было найдено!" << endl;
            }
            break;
        
        case 3:
            cout << "Введите объем двигателя: ";
            cin >> year;
            for (int i = 0; i < volumeEngine.size(); ++i)
            {
                if (year == volumeEngine[i])
                {
                    cout << "Что сделать с найденным элементом?" << endl;
                    cout << "Удалить -> d" << endl;
                    cout << "Вывести -> p" << endl;
                    cin >> strChoise;
                    amount += 1;
                    switch (strChoise)
                    {
                    case 'p':
                        print(++i);
                        break;
                    case 'd':
                        remove(i);
                        break;
                    }
                }
            }
            if (amount == 0)
            {
                cout << "Ничего не было найдено!" << endl;
            }
            break;

        case 4:
            cout << "Введите цену: ";
            cin >> year;
            for (int i = 0; i < priceAuto.size(); ++i)
            {
                if (year == priceAuto[i])
                {
                    cout << "Что сделать с найденным элементом?" << endl;
                    cout << "Удалить -> d" << endl;
                    cout << "Вывести -> p" << endl;
                    cin >> strChoise;
                    amount += 1;
                    switch (strChoise)
                    {
                    case 'p':
                        print(++i);
                        break;
                    case 'd':
                        remove(i);
                        break;
                    }
                }
            }
            if (amount == 0)
            {
                cout << "Ничего не было найдено!" << endl;
            }
            break;
        }

    }
private:
    char strChoise;
    string name;
    int year, volume, price, choise, amount;
    std::vector<string> nameAuto;
    std::vector<int> yearOfRealise;
    std::vector<int> volumeEngine;
    std::vector<int> priceAuto;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    AutoServise servise;
    int choise = 0;
    while (choise != 4)
    {
        system("CLS");
        cout << "Выберите вариант:" << endl;
        cout << "1. добавление" << endl;
        cout << "2. вывод" << endl;
        cout << "3. поиск" << endl;
        cout << "4. выход из программы" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            servise.adding();
            break;

        case 2:
            servise.print();
            break;

        case 3:
            servise.search();
            break;
        }
    }
}

