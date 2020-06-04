#include "questions.hpp"
#include "Menu.hpp"
#include "comparison.hpp"
#include "counting_for.hpp"
#include "ob_operatorax.hpp"
#include <iostream>
using namespace std;

int question1(int* tele2, int* mts, int* megafon, int* beeline, int* yota);
int question2(int* tele2, int* mts, int* megafon, int* beeline, int* yota);
int question3(int* tele2, int* mts, int* megafon, int* beeline, int* yota);
int question4(int* tele2, int* mts, int* megafon, int* beeline, int* yota);
int question5(int* tele2, int* mts, int* megafon, int* beeline, int* yota);
int question6(int* tele2, int* mts, int* megafon, int* beeline, int* yota);
int question7(int* tele2, int* mts, int* megafon, int* beeline, int* yota);

int question1(int* tele2, int* mts, int* megafon, int* beeline, int* yota)
{
    system("cls");
    cout << "\tДля каких целей вы чаще всего используете телефон?" << endl
         << "1: Звонки и смс\n"
         << "2: Социальные сети\n"
         << "3: Сторонние сервисы (ютуб, браузер, мобильные игры и тд.)\n"
         << "4: Все вариаты\n\n";
    bool y = 0;

    int choice; //для выбора пункта меню
    while (!y) {
        cout << ">";
        cin >> choice;

        if (choice < 1 || choice > 4)
            cout << "Ошибка, такого пункта не существует!" << endl;
        else
            y = 1;
    }
    switch (choice) {
    case 1:
        for (int i = 0; i < 7; i++) { // megafon
            if ((i < 2) || (i > 4)) {
                megafon[i]++;
            }
        }
        for (int i = 0; i < 6; i++) { // tele2
            if ((i == 1) || (i > 3)) {
                tele2[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // mts
            if ((i == 0) || (i == 2) || (i > 4)) {
                mts[i]++;
            }
        }

        for (int i = 0; i < 8; i++) { // beeline
            if (i != 2) {
                beeline[i]++;
            }
        }
        for (int i = 0; i < 3; i++) { // yota
            if (i == 2) {
                yota[i]++;
            }
        }
        question2(tele2, mts, megafon, beeline, yota);
        break;
    case 2:
        for (int i = 0; i < 8; i++) { // beeline
            if (i > 3) {
                beeline[i]++;
            }
        }
        for (int i = 0; i < 3; i++) { // yota
            if (i == 2) {
                yota[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // mts
            if (i != 1 || i != 4) {
                mts[i]++;
            }
        }
        for (int i = 0; i < 6; i++) { // tele2
            if ((i == 4) || (i == 5)) {
                tele2[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // megafon
            if ((i == 0) || (i > 4)) {
                megafon[i]++;
            }
        }
        question2(tele2, mts, megafon, beeline, yota);
    case 3:
        for (int i = 0; i < 3; i++) { // yota
            if (i == 2) {
                yota[i]++;
            }
        }
        for (int i = 0; i < 8; i++) { // beeline
            if (i > 3) {
                beeline[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // mts
            if (i != 1 || i != 4 || i != 3) {
                mts[i]++;
            }
        }
        for (int i = 0; i < 6; i++) { // tele2
            if ((i == 4) || (i == 5)) {
                tele2[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // megafon
            if ((i == 0) || (i > 4)) {
                megafon[i]++;
            }
        }
        question2(tele2, mts, megafon, beeline, yota);
    case 4:
        for (int i = 0; i < 7; i++) { // megafon
            if ((i == 0) || (i > 4)) {
                megafon[i]++;
            }
        }
        for (int i = 0; i < 6; i++) { // tele2
            if (i == 5) {
                tele2[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // mts
            if ((i == 2) || (i > 4)) {
                mts[i]--;
            }
        }

        for (int i = 0; i < 8; i++) { // beeline
            if (i > 3) {
                beeline[i]++;
            }
        }
        question2(tele2, mts, megafon, beeline, yota);
    }
    return 0;
}

int question2(int* tele2, int* mts, int* megafon, int* beeline, int* yota)
{
    system("cls");
    cout << "\tКакой мобильный оператор наиболее популярен среди ваших "
            "родственников (знакомых)?"
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
            cout << "Ошибка, такого пункта не существует!" << endl;
        else
            y = 1;
    }
    switch (choice) {
    case 1:
        for (int i = 0; i < 6; i++) {
            tele2[i] += 1;
        }
        question3(tele2, mts, megafon, beeline, yota);
    case 2:
        for (int i = 0; i < 7; i++) {
            mts[i] += 1;
        }
        question3(tele2, mts, megafon, beeline, yota);
    case 3:
        for (int i = 0; i < 7; i++) {
            megafon[i] += 1;
        }
        question3(tele2, mts, megafon, beeline, yota);
    case 4:
        for (int i = 0; i < 8; i++) {
            beeline[i] += 1;
        }
        question3(tele2, mts, megafon, beeline, yota);
    case 5:
        for (int i = 0; i < 3; i++) {
            yota[i] += 1;
        }
        question3(tele2, mts, megafon, beeline, yota);
    }
    return 0;
}

int question3(int* tele2, int* mts, int* megafon, int* beeline, int* yota)
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
            cout << "Ошибка, такого пункта не существует!" << endl;
        else
            y = 1;
    }
    switch (choice) {
    case 1:
        question4(tele2, mts, megafon, beeline, yota);
        break;
    case 2:
        question4(tele2, mts, megafon, beeline, yota);
        break;
    }

    return 0;
}

int question4(int* tele2, int* mts, int* megafon, int* beeline, int* yota)
{
    system("cls");
    cout << "\tСколько минут в среднем вы тратите на разговоры в месяц?" << endl
         << "1: 100-300\n"
         << "2: 300-500\n"
         << "3: 500+\n";
    bool y = 0;

    int choice; //для выбора пункта меню
    while (!y) {
        cout << ">";
        cin >> choice;

        if (choice < 1 || choice > 3)
            cout << "Ошибка, такого пункта не существует!" << endl;
        else
            y = 1;
    }
    switch (choice) {
    case 1:
        for (int i = 0; i < 7; i++) { // megafon
            if ((i == 2) || (i == 4)) {
                megafon[i]++;
            }
        }
        for (int i = 0; i < 6; i++) { // tele2
            if (i == 2) {
                tele2[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // mts
            if ((i == 3) || (i == 4)) {
                mts[i]++;
            }
        }
        for (int i = 0; i < 8; i++) { // beeline
            beeline[i]--;
        }
        for (int i = 0; i < 3; i++) { // yota
            if (i == 0) {
                yota[i]++;
            }
        }
        question5(tele2, mts, megafon, beeline, yota);
        break;
    case 2:
        for (int i = 0; i < 7; i++) { // megafon
            if ((i == 2) || (i == 3)) {
                megafon[i]++;
            }
        }
        for (int i = 0; i < 6; i++) { // tele2
            if ((i == 0) || (i == 4)) {
                tele2[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // mts
            if ((i == 0) || (i == 1)) {
                mts[i]++;
            }
        }
        for (int i = 0; i < 8; i++) { // beeline
            if ((i == 0) || (i == 2)) {
                beeline[i]++;
            }
        }
        for (int i = 0; i < 3; i++) { // yota
            if (i == 1) {
                yota[i]++;
            }
        }
        question5(tele2, mts, megafon, beeline, yota);
        break;
    case 3:
        for (int i = 0; i < 7; i++) { // megafon
            if ((i < 2) || (i > 4)) {
                megafon[i]++;
            }
        }
        for (int i = 0; i < 6; i++) { // tele2
            if ((i == 1) || (i > 2)) {
                tele2[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // mts
            if ((i == 2) || (i > 4)) {
                mts[i]++;
            }
        }
        for (int i = 0; i < 8; i++) { // beeline
            if ((i < 2) || (i > 2)) {
                beeline[i]++;
            }
        }
        for (int i = 0; i < 3; i++) { // yota
            if (i == 2) {
                yota[i]++;
            }
        }
        question5(tele2, mts, megafon, beeline, yota);
        break;
    }
    return 0;
}

int question5(int* tele2, int* mts, int* megafon, int* beeline, int* yota)
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
            cout << "Ошибка, такого пункта не существует!" << endl;
        else
            y = 1;
    }
    switch (choice) {
    case 1:
        for (int i = 0; i < 7; i++) { // megafon
            if ((i == 0) || (i > 4)) {
                megafon[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // mts
            mts[i]++;
        }
        for (int i = 0; i < 8; i++) { // beeline
            beeline[i]++;
        }
        question6(tele2, mts, megafon, beeline, yota);
        break;
    case 2:
        for (int i = 0; i < 7; i++) { // mts
            mts[i]++;
        }
        for (int i = 0; i < 8; i++) { // beeline
            beeline[i]++;
        }
        for (int i = 0; i < 7; i++) { // megafon
            if ((i == 0) || (i > 4)) {
                megafon[i]++;
            }
        }

        question6(tele2, mts, megafon, beeline, yota);
        break;
    case 3:
        for (int i = 0; i < 7; i++) {
            if (i != 2 || i != 3 || i != 4) {
                mts[i]++;
            }
        }
        question6(tele2, mts, megafon, beeline, yota);
        break;
    case 4:
        question6(tele2, mts, megafon, beeline, yota);
        break;
    }

    return 0;
}

int question6(int* tele2, int* mts, int* megafon, int* beeline, int* yota)
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
            cout << "Ошибка, такого пункта не существует!" << endl;
        else
            y = 1;
    }
    switch (choice) {
    case 1:
        for (int i = 0; i < 7; i++) { // megafon
            if ((i == 3) || (i == 4)) {
                megafon[i]++;
            }
        }
        for (int i = 0; i < 6; i++) { // tele2
            if ((i == 0) || (i == 4)) {
                tele2[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // mts
            if (i == 4) {
                mts[i]++;
            }
        }
        for (int i = 0; i < 8; i++) { // beeline
            if ((i == 0) || (i == 2)) {
                beeline[i]++;
            }
        }
        for (int i = 0; i < 3; i++) { // yota
            if (i == 1) {
                yota[i]++;
            }
        }
        question7(tele2, mts, megafon, beeline, yota);
    case 2:
        for (int i = 0; i < 7; i++) { // megafon
            if (i == 2) {
                megafon[i]++;
            }
        }
        for (int i = 0; i < 6; i++) { // tele2
            if (i == 2) {
                tele2[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // mts
            if ((i == 3) || (i == 4)) {
                mts[i]++;
            }
        }
        for (int i = 0; i < 8; i++) { // beeline
            if ((i == 0) || (i == 2)) {
                beeline[i]++;
            }
        }
        for (int i = 0; i < 3; i++) { // yota
            if (i == 1) {
                yota[i]++;
            }
        }
        question7(tele2, mts, megafon, beeline, yota);
    case 3:
        for (int i = 0; i < 7; i++) { // megafon
            if ((i == 1) || (i == 2)) {
                megafon[i]++;
            }
        }
        for (int i = 0; i < 6; i++) { // tele2
            if ((i == 0) || (i == 2)) {
                tele2[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // mts
            if (i == 1) {
                mts[i]++;
            }
        }
        for (int i = 0; i < 8; i++) { // beeline
            if (i < 4) {
                beeline[i]++;
            }
        }
        for (int i = 0; i < 3; i++) { // yota
            if (i == 0) {
                yota[i]++;
            }
        }

        question7(tele2, mts, megafon, beeline, yota);
    case 4:
        for (int i = 0; i < 7; i++) { // megafon
            if ((i == 0) || (i == 5) || (i == 6)) {
                megafon[i]++;
            }
        }
        for (int i = 0; i < 6; i++) { // tele2
            if ((i == 4) || (i == 5)) {
                tele2[i]++;
            }
        }
        for (int i = 0; i < 7; i++) { // mts
            if ((i == 0) || (i == 2) || (i == 5) || (i == 6)) {
                mts[i]++;
            }
        }
        for (int i = 0; i < 8; i++) { // beeline
            if (i > 3 || i < 7) {
                beeline[i]++;
            }
        }
        for (int i = 0; i < 3; i++) { // yota
            if (i == 2) {
                yota[i]++;
            }
        }
        question7(tele2, mts, megafon, beeline, yota);
    }
    return 0;
}

int question7(int* tele2, int* mts, int* megafon, int* beeline, int* yota)
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
            cout << "Ошибка, такого пункта не существует!" << endl;
        else
            y = 1;
    }
    switch (choice) {
    case 1:
        tele2[0]++;
        tele2[2]++;
        tele2[3]++;

        for (int i = 0; i < 7; i++) {
            mts[i] -= 1;
        }

        for (int i = 0; i < 7; i++) {
            if ((i < 2) || (i > 4))
                megafon[i]--;
            else
                megafon[i]++;
        }

        for (int i = 0; i < 8; i++) {
            if (i != 2)
                beeline[i]--;
            else
                beeline[i]++;
        }
        yota[1]++;
        yota[0]++;
        yota[2]--;
        comparison(tele2, mts, megafon, beeline, yota);

        break;
    case 2:

        for (int i = 0; i < 6; i++) {
            if (i != 1)
                tele2[i]--;
            else
                tele2[i]++;
        }

        for (int i = 0; i < 7; i++) {
            if (i != 1 || i != 3 || i != 4)
                mts[i]--;
            else
                mts[i]++;
        }

        for (int i = 0; i < 7; i++) {
            if (i != 1)
                megafon[i]--;
            else
                megafon[i]++;
        }

        for (int i = 0; i < 8; i++) {
            if (i != 0 || i != 3)
                beeline[i]--;
            else
                beeline[i]++;
        }
        yota[2]++;
        yota[0]--;
        yota[1]--;
        comparison(tele2, mts, megafon, beeline, yota);
        break;
    case 3:
        for (int i = 0; i < 6; i++) {
            if (i != 4)
                tele2[i]--;
            else
                tele2[i]++;
        }

        for (int i = 0; i < 7; i++) {
            if (i != 0)
                mts[i]--;
            else
                mts[i]++;
        }

        for (int i = 0; i < 7; i++) {
            if (i != 0)
                megafon[i]--;
            else
                megafon[i]++;
        }

        for (int i = 0; i < 8; i++) {
            if (i != 1 || i != 4)
                beeline[i]--;
            else
                beeline[i]++;
        }
        for (int i = 0; i < 3; i++) {
            yota[i]--;
        }
        comparison(tele2, mts, megafon, beeline, yota);
        break;
    case 4:

        for (int i = 0; i < 6; i++) {
            if (i != 5)
                tele2[i]--;
            else
                tele2[i]++;
        }
        for (int i = 0; i < 7; i++) {
            if (i != 2 || i != 5 || i != 6)
                mts[i]--;
            else
                mts[i]++;
        }
        for (int i = 0; i < 7; i++) {
            if (i != 5 || i != 6)
                megafon[i]--;
            else
                megafon[i]++;
        }

        for (int i = 0; i < 8; i++) {
            if (i != 5 || i != 6 || i != 7)
                beeline[i]--;
            else
                beeline[i]++;
        }
        for (int i = 0; i < 3; i++) {
            yota[i]--;
        }
        comparison(tele2, mts, megafon, beeline, yota);

        break;
    }
    return 0;
}