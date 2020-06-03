#include "globals.hpp"
#include <iostream>
using namespace std;

int question1()
{
    system("cls");
    cout << "\tДля каких целей вы чаще всего используете телефон?" << endl
         << "1: Звонки и смс\n"
         << "2: Социальные сети\n"
         << "3: Сторонние сервисы(ютуб,браузер,мобильные игры и тд.\n"
         << "4: Все вариаты\n\n";
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
        megafon[0] += 1;
        megafon[1] += 1;
        megafon[5] += 1;
        megafon[6] += 1;

        tele2[1] += 1;
        tele2[4] += 1;
        tele2[5] += 1;

        mts[0] += 1;
        mts[2] += 1;
        mts[5] += 1;
        mts[6] += 1;

        for (int i = 0; i < 8; i++) {
            if (i != 2) {
                beeline[i] += 1;
            }
        }

        yota[2] += 1;
        cout << megafon[0];
        question2();
        break;
    case 2:
        for (int i = 4; i < 8; i++) {
            beeline[i] += 1;
        }
        yota[2] += 1;
        for (int i = 0; i < 7; i++) {
            if (i != 1 || i != 4) {
                mts[i] += 1;
            }
        }

        tele2[4] += 1;
        tele2[5] += 1;

        megafon[0] += 1;
        megafon[5] += 1;
        megafon[6] += 1;
        question2();
    case 3:
        yota[2] += 1;
        for (int i = 4; i < 8; i++) {
            beeline[i] += 1;
        }
        for (int i = 0; i < 7; i++) {
            if (i != 1 || i != 4 || i != 3) {
                mts[i] += 1;
            }
        }
        tele2[4] += 1;
        tele2[5] += 1;

        megafon[0] += 1;
        megafon[5] += 1;
        megafon[6] += 1;
        question2();
    case 4:
        megafon[0] += 1;
        megafon[5] += 1;
        megafon[6] += 1;

        tele2[5] += 1;

        mts[2] += 1;
        mts[5] += 1;
        mts[6] += 1;

        for (int i = 4; i < 8; i++) {
            beeline[i] += 1;
        }
        question2();
    }

    return 0;
}

int question2()
{
    system("cls");
    cout << "\tКакой мобильный оператор наиболее популярен среди ваших "
            "родственников(знакомых)?"
         << endl
         << "1: Теле 2\n"
         << "2: Мтс\n"
         << "3: Мегафон\n"
         << "4: Билайн\n"
         << "5: Yota\n";
    bool y = 0;

    int choice; //для выбора пункта меню
    while (!y) {
        cout << ">";
        cin >> choice;

        if (choice < 1 || choice > 5)
            cout << "Ошибка,такого пункта не существует!" << endl;
        else
            y = 1;
    }
    switch (choice) {
    case 1:
        for (int i = 0; i < 6; i++) {
            tele2[i] += 1;
        }
        question3();
    case 2:
        for (int i = 0; i < 7; i++) {
            mts[i] += 1;
        }
        question3();
    case 3:
        for (int i = 0; i < 7; i++) {
            megafon[i] += 1;
        }
        question3();
    case 4:
        for (int i = 0; i < 8; i++) {
            beeline[i] += 1;
        }
        question3();
    case 5:
        for (int i = 0; i < 3; i++) {
            yota[i] += 1;
        }
        question3();
    }
    return 0;
}

int question3()
{
    system("cls");
    cout << "\tКуда чаще всего вы совершаете звонки?" << endl
         << "1: В домашний регион\n"
         << "2: По всей России\n";
    bool y = 0;

    int choice; //для выбора пункта меню
    while (!y) {
        cout << ">";
        cin >> choice;

        if (choice < 1 || choice > 2)
            cout << "Ошибка,такого пункта не существует!" << endl;
        else
            y = 1;
    }
    switch (choice) {
    case 1:
        question4();
        break;
    case 2:
        question4();
        break;
    }

    return 0;
}

int question4()
{
    system("cls");
    cout << "\tСколько минут в среднем вы тратите на разговоры в месяц?" << endl
         << "1: 100-300\n"
         << "2: 300-500\n"
         << "3: Более 500\n";
    bool y = 0;

    int choice; //для выбора пункта меню
    while (!y) {
        cout << ">";
        cin >> choice;

        if (choice < 1 || choice > 3)
            cout << "Ошибка,такого пункта не существует!" << endl;
        else
            y = 1;
    }
    switch (choice) {
    case 1:
        tele2[2] += 1;

        mts[3] += 1;
        mts[4] += 1;

        megafon[2] += 1;
        megafon[4] += 1;

        yota[0] += 1;
        question5();
        break;
    case 2:
        tele2[0] += 1;
        tele2[4] += 1;

        mts[0] += 1;
        mts[1] += 1;

        megafon[2] += 1;
        megafon[3] += 1;

        beeline[0] += 1;
        beeline[2] += 1;

        yota[1] += 1;
        question5();
        break;
    case 3:
        tele2[1] += 1;
        tele2[3] += 1;
        tele2[5] += 1;

        mts[2] += 1;
        mts[5] += 1;
        mts[6] += 1;

        megafon[0] += 1;
        megafon[1] += 1;
        megafon[5] += 1;
        megafon[6] += 1;

        beeline[1] += 1;
        beeline[3] += 1;
        beeline[4] += 1;
        beeline[5] += 1;
        beeline[6] += 1;
        beeline[7] += 1;

        yota[2] += 1;
        question5();
        break;
    }

    return 0;
}

int question5()
{
    system("cls");
    cout << "\tСколько SMS в среднем вы отправляете в день?" << endl
         << "1: 0-2\n"
         << "2: 3-10\n"
         << "3: 11 и более\n"
         << "4: Затрудняюсь ответитть\n";
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
        megafon[0]++;
        megafon[5]++;
        megafon[6]++;

        for (int i = 0; i < 7; i++) {
            mts[i] += 1;
        }

        for (int i = 0; i < 9; i++) {
            beeline[i] += 1;
        }
        question6();
        break;
    case 2:
        megafon[0]++;
        megafon[5]++;
        megafon[6]++;

        for (int i = 0; i < 5; i++) {
            mts[i] += 1;
        }

        for (int i = 0; i < 9; i++) {
            beeline[i] += 1;
        }
        question6();
        break;
    case 3:
        for (int i = 0; i < 7; i++) {
            if (i != 2 || i != 3 || i != 4) {
                mts[i] += 1;
            }
        }
        question6();
        break;
    case 4:
        question6();
        break;
    }

    return 0;
}

int question6()
{
    system("cls");
    cout << "\tКакой пакет интернета вы бы предпочли?" << endl
         << "1: 1-5 Гб\n"
         << "2: 5-10 Гб\n"
         << "3: 10-20 Гб\n"
         << "4: Безлимит\n";
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
        mts[4]++;
        megafon[3]++;
        megafon[4]++;
        yota[1]++;
        question7();
    case 2:
        mts[3]++;
        mts[4]++;
        tele2[2]++;
        megafon[2]++;
        question7();
    case 3:
        beeline[0]++;
        beeline[1]++;
        beeline[2]++;
        beeline[3]++;
        mts[1]++;
        tele2[0]++;
        tele2[2]++;
        tele2[3]++;
        megafon[1]++;
        megafon[2]++;
        yota[0]++;
        question7();
    case 4:
        yota[2]++;
        beeline[4]++;
        beeline[5]++;
        beeline[6]++;
        beeline[7]++;
        mts[0]++;
        mts[2]++;
        mts[5]++;
        mts[6]++;
        tele2[4]++;
        tele2[5]++;
        megafon[0]++;
        megafon[5]++;
        megafon[6]++;
        question7();
    }

    return 0;
}

int question7()
{
    system("cls");
    cout << "\tКакую сумму вы хотели бы тратить на услуги связи и интернета?"
         << endl
         << "1: До 200-400р\n"
         << "2: 400-600\n"
         << "3: 600-800\n"
         << "4: Больше 800\n";
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
        tele2[0]++;
        tele2[2]++;
        tele2[3]++;

        megafon[2]++;
        megafon[3]++;
        megafon[4]++;

        beeline[2]++;

        yota[1]++;
        comparison();

        break;
    case 2:
        tele2[1]++;

        mts[1]++;
        mts[3]++;
        mts[4]++;

        megafon[1]++;

        beeline[0]++;
        beeline[3]++;

        yota[2]++;
        comparison();

        break;
    case 3:
        tele2[4]++;

        mts[0]++;

        megafon[0]++;

        beeline[1]++;
        beeline[4]++;
        comparison();

        break;
    case 4:
        tele2[5]++;

        mts[2]++;
        mts[5]++;
        mts[6]++;

        megafon[5]++;
        megafon[6]++;

        beeline[5]++;
        beeline[6]++;
        beeline[7]++;
        comparison();

        break;
    }

    return 0;
}