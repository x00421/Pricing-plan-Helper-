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
    while (!y)
    {
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
        cout << ">";
        cin >> choice;
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
        if (choice < 1 || choice > 6)
            cout << "Ошибка,такого пункта не существует!" << endl;
        else
            y = 1;
    }
    switch (choice)
    {
    case 1:

        system("cls");
        SetConsoleTextAttribute(hConsole, (WORD)((7 << 0) | 0));
        cout << "\tТеле 2\n"
             << "\nTele2 Россия — российская телекоммуникационная компания, основанная шведской группой компаний Tele2 AB\n"
             << "на базе сетей, приобретённых в Российской Федерации. \n"
             << "Работает с 2003 года. Владельцем Tele2 Россия является компания Ростелеком.\n"
             << "По итогам 2019 года, предоставляет услуги сотовой связи более чем 44,6 млн абонентов.\n"
             << "По состоянию на начало апреля 2020 года сеть Tele2 работает в 67 субъектах Российской Федерации.\n"
             << "\n"
             << endl;

        system("pause");
        ob_operatorax();
        break;
    case 2:

        system("cls");
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 12) | 12));
        cout << "\tМТС\n"
             << "\nМТС («Мобильные ТелеСистемы», ПАО «МТС») — российская телекоммуникационная компания,"
             << "оказывающая услуги в России и странах СНГ под торговой маркой «МТС».\n"
             << "Компания оказывает услуги сотовой связи (в стандартах GSM, UMTS (3G) и LTE),\n"
             << "услуги проводной телефонной связи, широкополосного доступа в Интернет, мобильного телевидения, кабельного телевидения,\n"
             << "спутникового телевидения, цифрового телевидения и сопутствующие услуги, в частности услуги по продаже контента.\n"
             << "По состоянию на март 2019 года компания во всех странах своего присутствия обслуживала 104,7 млн абонентов.\n"
             << "\n"
             << endl;
        system("pause");
        ob_operatorax();
        break;
    case 3:

        system("cls");
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 10) | 10));
        cout << "\tМегафон\n"
             << "\n«МегаФон» — российская телекоммуникационная компания, предоставляющая услуги сотовой связи (GSM, UMTS и LTE), \n"
             << "а также местной телефонной связи, широкополосного доступа в Интернет, кабельного телевидения и ряд сопутствующих услуг.\n"
             << "Действует в 83 субъектах Российской Федерации, в Таджикистане, а также в частично признанных Абхазии и Южной Осетии.\n"
             << "Количество абонентов мобильной связи на конец 2015 года составляло 100,8 млн человек.\n"
             << "Компания под нынешним брендом образована в мае 2002 года.\n"
             << endl;
        system("pause");
        ob_operatorax();
        break;

    case 4:

        system("cls");
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 14) | 14));
        cout << "\tБилайн\n"
             << "\nПод маркой «Билайн» оказываются услуги сотовой (GSM, UMTS и LTE) и фиксированной связи,\n"
             << "проводного (FTTB) и беспроводного (Wi-Fi, «Билайн WiFi») высокоскоростного доступа в Интернет,\n"
             << "IP-телевидения («Домашнее цифровое телевидение Билайн» и «Мобильное ТВ»).\n"
             << "«Билайн» входит в Топ-5 по радиоразмещениям и размещениям наружной рекламы, а также в Топ-30 рекламодателей по всем медиа.\n"
             << endl;
        system("pause");
        ob_operatorax();
        break;

    case 5:

        system("cls");
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 9) | 9));
        cout << "\tYota\n"
             << "\nТелекоммуникационная компания «Yota» была основана в 2007 году. На сегодняшний день это один из самых востребованных операторов мобильной связи\n"
             << "на территории России. Компания предлагает большой комплекс услуг мобильной связи \n"
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