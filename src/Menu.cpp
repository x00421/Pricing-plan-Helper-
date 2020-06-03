#include "ob_operatorax.hpp"
#include "questions.hpp"
#include <iostream>
using namespace std;

void mainMenu()
{
    //вывод пунктов меню
    system("cls");
    setlocale(LC_ALL, "Russian");

    cout << "\t       Черноколпаков, Дудинский, Кичигин - ИП-915" << endl;

    cout << "\t1-для запуска ассистента!\n"
         << "\t2-инструкция.\n"
         << "\t3-сведенья об операторах.\n"
         << "\t4-Выход.\n";

    bool y = 0;

    int choice; //для выбора пункта меню
    while (!y) {
        cout << ">";
        cin >> choice;

        if (choice < 1 || choice > 4)

            cout << "Ошибка,такого пункта не существует!" << endl;
        else
            y = 1;
    }

    switch (choice) {
    case 1:
        question1();
        break;
    case 2:

        system("cls");

        cout << "\nДля запуска ассистента, помогающего выбрать тариф нажмите - "
                "1\n"
             << "Чтобы узнать информацию об операторах нажмите - 3 \n"
             << "Курсовая работа была создана: Черноколпаков, Дудинский, "
                "Кичигин - "
                "ИП-915\n"
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