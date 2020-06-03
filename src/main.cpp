#include <iostream>
#include <windows.h>
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
void mainMenu(); //функция для основного меню
void ob_operatorax(); //функция вывода сведений об операторах
int question1(); //вопрос
int question2();
int question3();
int question4();
int question5();
int question6();
int question7();
void counting_for_tele2();
void counting_for_mts();
void counting_for_megafon();
void counting_for_beeline();
void counting_for_yota();
int comparison();

int tele2[6]; //баллы для каждого из тарифов оператора Теле 2
// 0-Мой онлайн
// 1-Мой онлайн+
// 2-Мой разговор
// 3-Лайт
// 4-Безлимит
// 5-Премиум
int mts[7]; //баллы для каждого из тарифов оператора Мтс
// 0-Тарифище
// 1-Мой Smart
// 2-Наш Smart
// 3-Тариф «X»
// 4-Smart
// 5-Smart Top
// 6-ULTRA
int megafon[7]; //баллы для каждого из тарифов оператора Мегафон
// 0-Максимум
// 1-Всё
// 2-Интернет
// 3-Звонки
// 4-Минимум
// 5-VIP
// 6-Премиум
int beeline[8]; //баллы для каждого из тарифов оператора Билайн
// 0-Не один дома
// 1-Не один дома-2
// 2-Близкие люди 1
// 3-Близкие люди 2
// 4-Близкие люди 3
// 5-Близкие люди 4
// 6-Близкие люди 5
// 7-Близкие люди 6
int yota[3]; //баллы для каждого из тарифов оператора Yota
// 0-больше интернета
// 1-больше минут
// 2-ещё больше минут и интернета
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
    while (!y) {
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
        cout << ">";
        cin >> choice;
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
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
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 5) | 5));
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

void ob_operatorax()
{
    system("cls");
    SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
    cout << "\t1-Теле 2\n"
         << "\t2-Мтс\n"
         << "\t3-Мегафон\n"
         << "\t4-Билайн\n"
         << "\t5-Yota\n"
         << "\t6-Вернуться в меню\n";

    bool y = 0;

    int choice; //для выбора пункта меню
    while (!y) {
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
        cout << ">";
        cin >> choice;
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
        if (choice < 1 || choice > 6)
            cout << "Ошибка,такого пункта не существует!" << endl;
        else
            y = 1;
    }
    switch (choice) {
    case 1:

        system("cls");
        SetConsoleTextAttribute(hConsole, (WORD)((7 << 0) | 0));
        cout << "\tТеле 2\n"
             << "\nTele2 Россия — российская телекоммуникационная компания, "
                "основанная шведской группой компаний Tele2 AB\n"
             << "на базе сетей, приобретённых в Российской Федерации. \n"
             << "Работает с 2003 года. Владельцем Tele2 Россия является "
                "компания "
                "Ростелеком.\n"
             << "По итогам 2019 года, предоставляет услуги сотовой связи более "
                "чем "
                "44,6 млн абонентов.\n"
             << "По состоянию на начало апреля 2020 года сеть Tele2 работает в "
                "67 "
                "субъектах Российской Федерации.\n"
             << "\n"
             << endl;

        system("pause");
        ob_operatorax();
        break;
    case 2:

        system("cls");
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 12) | 12));
        cout << "\tМТС\n"
             << "\nМТС («Мобильные ТелеСистемы», ПАО «МТС») — российская "
                "телекоммуникационная компания,"
             << "оказывающая услуги в России и странах СНГ под торговой маркой "
                "«МТС».\n"
             << "Компания оказывает услуги сотовой связи (в стандартах GSM, "
                "UMTS "
                "(3G) и LTE),\n"
             << "услуги проводной телефонной связи, широкополосного доступа в "
                "Интернет, мобильного телевидения, кабельного телевидения,\n"
             << "спутникового телевидения, цифрового телевидения и "
                "сопутствующие "
                "услуги, в частности услуги по продаже контента.\n"
             << "По состоянию на март 2019 года компания во всех странах "
                "своего "
                "присутствия обслуживала 104,7 млн абонентов.\n"
             << "\n"
             << endl;
        system("pause");
        ob_operatorax();
        break;
    case 3:

        system("cls");
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 10) | 10));
        cout << "\tМегафон\n"
             << "\n«МегаФон» — российская телекоммуникационная компания, "
                "предоставляющая услуги сотовой связи (GSM, UMTS и LTE), \n"
             << "а также местной телефонной связи, широкополосного доступа в "
                "Интернет, кабельного телевидения и ряд сопутствующих услуг.\n"
             << "Действует в 83 субъектах Российской Федерации, в "
                "Таджикистане, а "
                "также в частично признанных Абхазии и Южной Осетии.\n"
             << "Количество абонентов мобильной связи на конец 2015 года "
                "составляло 100,8 млн человек.\n"
             << "Компания под нынешним брендом образована в мае 2002 года.\n"
             << endl;
        system("pause");
        ob_operatorax();
        break;

    case 4:

        system("cls");
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 14) | 14));
        cout << "\tБилайн\n"
             << "\nПод маркой «Билайн» оказываются услуги сотовой (GSM, UMTS и "
                "LTE) и фиксированной связи,\n"
             << "проводного (FTTB) и беспроводного (Wi-Fi, «Билайн WiFi») "
                "высокоскоростного доступа в Интернет,\n"
             << "IP-телевидения («Домашнее цифровое телевидение Билайн» и "
                "«Мобильное ТВ»).\n"
             << "«Билайн» входит в Топ-5 по радиоразмещениям и размещениям "
                "наружной рекламы, а также в Топ-30 рекламодателей по всем "
                "медиа.\n"
             << endl;
        system("pause");
        ob_operatorax();
        break;

    case 5:

        system("cls");
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 9) | 9));
        cout << "\tYota\n"
             << "\nТелекоммуникационная компания «Yota» была основана в 2007 "
                "году. "
                "На сегодняшний день это один из самых востребованных "
                "операторов "
                "мобильной связи\n"
             << "на территории России. Компания предлагает большой комплекс "
                "услуг "
                "мобильной связи \n"
             << "и высокоскоростного интернета, включая 4G.\n"
             << "\n"
             << endl;
        system("pause");
        ob_operatorax();
        break;

    case 6:
        mainMenu();
        break;
    }
}

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
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
        cout << ">";
        cin >> choice;
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
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
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
        cout << ">";
        cin >> choice;
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
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
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
        cout << ">";
        cin >> choice;
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
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
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
        cout << ">";
        cin >> choice;
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
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
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
        cout << ">";
        cin >> choice;
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
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
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
        cout << ">";
        cin >> choice;
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
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
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
        cout << ">";
        cin >> choice;
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
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

int counting_for_tele2(int* max_fortele2, int* imax_fortele2)
{
    system("cls");
    setlocale(LC_ALL, "Russian");
    int i;
    *imax_fortele2 = 0;
    *max_fortele2 = tele2[0];

    for (i = 0; i < 6; i++) {
        if (tele2[i] > *max_fortele2)
            *max_fortele2 = tele2[i], *imax_fortele2 = i;
    }

    cout << "\n Максимальный элемент(tele2): " << *max_fortele2;
    cout << "\n Индекс макс. элемента(tele2): " << *imax_fortele2 << endl;
    return 0;
}

int counting_for_mts(int* max_mts, int* imax_mts)
{
    system("cls");
    setlocale(LC_ALL, "Russian");
    int i;
    *imax_mts = 0;
    *max_mts = mts[0];

    for (i = 0; i < 7; i++) {
        if (mts[i] > *max_mts)
            *max_mts = mts[i], *imax_mts = i;
    }

    cout << "\n Максимальный элемент(mts): " << *max_mts;
    cout << "\n Индекс макс. элемента(mts): " << *imax_mts << endl;

    return 0;
}

int counting_for_megafon(int* max_megafon, int* imax_megafon)
{
    system("cls");
    setlocale(LC_ALL, "Russian");
    int i;
    *imax_megafon = 0;
    *max_megafon = megafon[0];

    for (i = 0; i < 7; i++) {
        if (megafon[i] > *max_megafon)
            *max_megafon = megafon[i], *imax_megafon = i;
    }

    cout << "\n Максимальный элемент: " << *max_megafon;
    cout << "\n Индекс макс. элемента: " << *imax_megafon << endl;

    return 0;
}

int counting_for_beeline(int* max_beeline, int* imax_beeline)
{
    system("cls");
    setlocale(LC_ALL, "Russian");
    int i;
    *imax_beeline = 0;
    *max_beeline = beeline[0];

    for (i = 0; i < 8; i++) {
        if (beeline[i] > *max_beeline)
            *max_beeline = beeline[i], *imax_beeline = i;
    }

    cout << "\n Максимальный элемент: " << *max_beeline;
    cout << "\n Индекс макс. элемента: " << *imax_beeline << endl;

    return 0;
}

int counting_for_yota(int* max_yota, int* imax_yota)
{
    system("cls");
    setlocale(LC_ALL, "Russian");
    int i;
    *imax_yota = 0;
    *max_yota = yota[0];

    for (i = 0; i < 3; i++) {
        if (yota[i] > *max_yota)
            *max_yota = yota[i], *imax_yota = i;
    }

    cout << "\n Максимальный элемент: " << *max_yota;
    cout << "\n Индекс макс. элемента: " << *imax_yota << endl;

    return 0;
}

int comparison()
{
    int imax_fortele2, max_fortele2;
    counting_for_tele2(&max_fortele2, &imax_fortele2);
    int imax_mts, max_mts;
    counting_for_mts(&imax_mts, &max_mts);
    int imax_megafon, max_megafon;
    counting_for_megafon(&imax_megafon, &max_megafon);
    int imax_beeline, max_beeline;
    counting_for_beeline(&imax_beeline, &max_beeline);
    int imax_yota, max_yota;
    counting_for_yota(&imax_yota, &max_yota);
    return 0;
}