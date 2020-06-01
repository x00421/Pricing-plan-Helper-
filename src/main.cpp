#include <iostream>
#include <windows.h>
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
void mainMenu(); //функция для основного меню
void ob_operatorax();
int question1();

int main()
{
    setlocale(LC_ALL, "Russian");
    mainMenu(); //для вывода начального меню в косоль
    return 0;
}
void mainMenu()
{
    //вывод пунктов меню
    system("cls");
    setlocale(LC_ALL, "Russian");
    SetConsoleTextAttribute(hConsole, (WORD)((14 << 4) | 4));
    cout << "\t       Черноколпаков, Дудинский, Кичигин - ИП-915" << endl;
    SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
    cout << "\t1-для запуска ассистента!\n"
         << "\t2-инструкция.\n"
         << "\t3-сведенья об операторах.\n"
         << "\t4-Выход.\n";

    bool y = 0;

    int choice; //для выбора пункта меню
    while (!y)
    {
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
        cout << ">";
        cin >> choice;
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
        if (choice < 1 || choice > 4)

            cout << "Ошибка,такого пункта не существует!" << endl;
        else
            y = 1;
    }

    switch (choice)
    {
    case 1:
        question1();
        break;
    case 2:

        system("cls");
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 5) | 5));
        cout << "\nДля запуска ассистента, помогающего выбрать тариф нажмите - 1\n"
             << "Чтобы узнать информацию об операторах нажмите - 3 \n"
             << "Курсовая работа была создана: Черноколпаков, Дудинский, Кичигин - ИП-915\n"
             << "\n"
             << endl;
        system("pause");
        mainMenu();
        break;
    case 3:

        system("cls");
        ob_operatorax();
        break;

    case 4:
        exit(0); //выход
    }
}