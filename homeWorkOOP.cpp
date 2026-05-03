#include <string>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <conio.h>
#include <fstream>
using namespace std;

class PETS
{
public:
    void input()
    {
        system("CLS");
        cout << "Введите имя питомца: ";
        cin >> name;
        namePet.push_back(name);
        cout << "Введите характеристику питомца: ";
        cin >> characteristic;
        characteristicPet.push_back(characteristic);
    }
    void output() 
    {
        system("CLS");
        for (int i = 0; i < namePet.size(); ++i) 
        {
            cout << namePet[i] << " — " << characteristicPet[i] << endl;
        }
        system("pause");
    }

private:
    string name, characteristic;
    std::vector<string> namePet;
    std::vector<string> characteristicPet;
};

class DOG : public PETS {};
class CAT : public PETS {};
class PARAKEET : public PETS {};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    DOG dog;
    CAT cat;
    PARAKEET parakeet;
    int choice = 0, choicePet;
    while (choice != 3) 
    {
        system("CLS");
        cout << "Выберите:" << endl;
        cout << "1. Ввод имени и харектристики питомца" << endl;
        cout << "2. Вывод имен и характеристик питомца" << endl;
        cout << "3. Выход из прогаммы" << endl;
        cout << "Вариант -> ";
        cin >> choice;
        switch (choice) 
        {
        case 1:
            cout << "Выберите животное:" << endl;
            cout << "1. батердог" << endl;
            cout << "2. котость" << endl;
            cout << "3. попуг" << endl;
            cout << "Питомец -> ";
            cin >> choicePet;
            switch (choicePet)
            {
            case 1:
                dog.input();
                break;
            case 2:
                cat.input();
                break;
            case 3:
                parakeet.input();
                break;
            }
            break;
        case 2:
            cout << "Выберите животное:" << endl;
            cout << "1. батердог" << endl;
            cout << "2. котость" << endl;
            cout << "3. попуг" << endl;
            cout << "Питомец -> ";
            cin >> choicePet;
            switch (choicePet)
            {
            case 1:
                dog.output();
                break;
            case 2:
                cat.output();
                break;
            case 3:
                parakeet.output();
                break;
            }
            break;
        }
    }
}

