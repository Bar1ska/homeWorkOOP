#include <string>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <conio.h>
#include <fstream>
using namespace std;

class Directory
{
private:

    std::vector<string> companyName;
    std::vector<string> companyOwner;
    std::vector<int> companyNumber;
    std::vector<string> companyAdress;
    std::vector<string> companyOccupation;
    int number, choice, amount;
    string name, owner, adress, occupation;
    
    void writingFiles(int ind)
    {
        ofstream outFile;
        outFile.open("file.txt", std::ios::app);
        outFile << companyName[ind] << " | " << companyOwner[ind] << " | " << companyNumber[ind] << " | " << companyAdress[ind] << " | " << companyOccupation[ind] << endl;
        outFile.close();
    }

public:
    
    void adding()
    {
        system("CLS");
        cout << "Введите название компании: ";
        cin >> name;
        companyName.push_back(name);
        cout << "Введите владельца компании: ";
        cin >> owner;
        companyOwner.push_back(owner);
        cout << "Введите телефонный номер компании: ";
        cin >> number;
        companyNumber.push_back(number);
        cout << "Введите адресс компани: ";
        cin >> adress;
        companyAdress.push_back(adress);
        cout << "Введите род деятельности компании: ";
        cin >> occupation;
        companyOccupation.push_back(occupation);
        writingFiles(companyName.size() - 1);
        system("pause");
    }
    void search() 
    {
        system("CLS");
        cout << "Проведите поиск в :" << endl;
        cout << "1. имени" << endl;
        cout << "2. владельце" << endl;
        cout << "3. номере телефоне" << endl;
        cout << "4. адрессе" << endl;
        cout << "5. роду деятельности" << endl;
        cout << endl << "ваш выбор: ";
        cin >> choice;
        amount = 0;
        switch (choice) 
        {
        case 1:
            cout << endl << "Введите поисковое имя копании: ";
            cin >> name;
            for (int i = 0; i < companyName.size(); ++i) 
            {
                if (companyName[i] == name) 
                {
                    ++amount;
                    cout << companyName[i] << " | " << companyOwner[i] << " | " << companyNumber[i] << " | " << companyAdress[i] << " | " << companyOccupation[i] << endl;
                }
            }
            if (amount == 0)
            {
                cout << "Ничего не было найдено" << endl;
            }
            break;
        case 2:
            cout << endl << "Введите поискового владельца: ";
            cin >> owner;
            for (int i = 0; i < companyOwner.size(); ++i)
            {
                if (companyOwner[i] == owner)
                {
                    ++amount;
                    cout << companyName[i] << " | " << companyOwner[i] << " | " << companyNumber[i] << " | " << companyAdress[i] << " | " << companyOccupation[i] << endl;
                }
            }
            if (amount == 0)
            {
                cout << "Ничего не было найдено" << endl;
            }
            break;
        case 3:
            cout << endl << "Введите поисковый номер телефона: ";
            cin >> number;
            for (int i = 0; i < companyNumber.size(); ++i)
            {
                if (companyNumber[i] == number)
                {
                    ++amount;
                    cout << companyName[i] << " | " << companyOwner[i] << " | " << companyNumber[i] << " | " << companyAdress[i] << " | " << companyOccupation[i] << endl;
                }
            }
            if (amount == 0)
            {
                cout << "Ничего не было найдено" << endl;
            }
            break;
        case 4:
            cout << endl << "Введите поисковый адресс: ";
            cin >> adress;
            for (int i = 0; i < companyAdress.size(); ++i)
            {
                if (companyAdress[i] == adress)
                {
                    ++amount;
                    cout << companyName[i] << " | " << companyOwner[i] << " | " << companyNumber[i] << " | " << companyAdress[i] << " | " << companyOccupation[i] << endl;
                }
            }
            if (amount == 0)
            {
                cout << "Ничего не было найдено" << endl;
            }
            break;
        case 5:
            cout << endl << "Введите поисковое имя копании: ";
            cin >> occupation;
            for (int i = 0; i < companyOccupation.size(); ++i)
            {
                if (companyOccupation[i] == occupation)
                {
                    ++amount;
                    cout << companyName[i] << " | " << companyOwner[i] << " | " << companyNumber[i] << " | " << companyAdress[i] << " | " << companyOccupation[i] << endl;
                }
            }
            if (amount == 0)
            {
                cout << "Ничего не было найдено" << endl;
            }
            break;

        }
        system("pause");
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Directory directory;
    int choice = 0;
    while (choice != 3) 
    {
        system("CLS");
        cout << "Выберите команду :" << endl;
        cout << "1. добавление" << endl;
        cout << "2. поиск" << endl;
        cout << "3. выход из программы" << endl;
        cout << endl << "Ваш выбор: ";
        cin >> choice;
        switch(choice) 
        {
        case 1:
            directory.adding();
            break;
        case 2:
            directory.search();
            break;
        }
    }
}

