#include "Menu.hpp"
#include <iostream>
using namespace std;

void about_operators(
        int* tele2, int* mts, int* megafon, int* beeline, int* yota)
{
    system("cls");

    cout << "\t1-Теле 2" << endl
         << "\t2-Мтс" << endl
         << "\t3-Мегафон" << endl
         << "\t4-Билайн" << endl
         << "\t5-Yota" << endl
         << "\t6-Вернуться в меню" << endl;

    bool check_input_data = 0;

    int choice; //для выбора пункта меню
    while (!check_input_data) {
        cout << ">";
        cin >> choice;

        if (choice < 1 || choice > 6)
            cout << "Ошибка,такого пункта не существует!" << endl;
        else
            check_input_data = 1;
    }
    switch (choice) {
    case 1:

        system("cls");

        cout << "\tТеле 2" << endl
             << "\nTele2 Россия — российская телекоммуникационная компания, "
                "основанная шведской группой компаний Tele2 AB"
             << endl
             << "на базе сетей, приобретённых в Российской Федерации. " << endl
             << "Работает с 2003 года. Владельцем Tele2 Россия является "
                "компания "
                "Ростелеком."
             << endl
             << "По итогам 2019 года, предоставляет услуги сотовой связи более "
                "чем "
                "44,6 млн абонентов."
             << endl
             << "По состоянию на начало апреля 2020 года сеть Tele2 работает в "
                "67 "
                "субъектах Российской Федерации."
             << endl
             << "" << endl
             << endl;

        system("pause");
        about_operators(tele2, mts, megafon, beeline, yota);
        break;
    case 2:

        system("cls");

        cout << "\tМТС" << endl
             << "\nМТС («Мобильные ТелеСистемы», ПАО «МТС») — российская "
                "телекоммуникационная компания,"
             << "оказывающая услуги в России и странах СНГ под торговой маркой "
                "«МТС»."
             << endl
             << "Компания оказывает услуги сотовой связи (в стандартах GSM, "
                "UMTS "
                "(3G) и LTE),"
             << endl
             << "услуги проводной телефонной связи, широкополосного доступа в "
                "Интернет, мобильного телевидения, кабельного телевидения,"
             << endl
             << "спутникового телевидения, цифрового телевидения и "
                "сопутствующие "
                "услуги, в частности услуги по продаже контента."
             << endl
             << "По состоянию на март 2019 года компания во всех странах "
                "своего "
                "присутствия обслуживала 104,7 млн абонентов."
             << endl
             << "" << endl
             << endl;
        system("pause");
        about_operators(tele2, mts, megafon, beeline, yota);
        break;
    case 3:

        system("cls");

        cout << "\tМегафон" << endl
             << "\n«МегаФон» — российская телекоммуникационная компания, "
                "предоставляющая услуги сотовой связи (GSM, UMTS и LTE), "
             << endl
             << "а также местной телефонной связи, широкополосного доступа в "
                "Интернет, кабельного телевидения и ряд сопутствующих услуг."
             << endl
             << "Действует в 83 субъектах Российской Федерации, в "
                "Таджикистане, а "
                "также в частично признанных Абхазии и Южной Осетии."
             << endl
             << "Количество абонентов мобильной связи на конец 2015 года "
                "составляло 100,8 млн человек."
             << endl
             << "Компания под нынешним брендом образована в мае 2002 года."
             << endl
             << endl;
        system("pause");
        about_operators(tele2, mts, megafon, beeline, yota);
        break;

    case 4:

        system("cls");

        cout << "\tБилайн" << endl
             << "\nПод маркой «Билайн» оказываются услуги сотовой (GSM, UMTS и "
                "LTE) и фиксированной связи,"
             << endl
             << "проводного (FTTB) и беспроводного (Wi-Fi, «Билайн WiFi») "
                "высокоскоростного доступа в Интернет,"
             << endl
             << "IP-телевидения («Домашнее цифровое телевидение Билайн» и "
                "«Мобильное ТВ»)."
             << endl
             << "«Билайн» входит в Топ-5 по радиоразмещениям и размещениям "
                "наружной рекламы, а также в Топ-30 рекламодателей по всем "
                "медиа."
             << endl
             << endl;
        system("pause");
        about_operators(tele2, mts, megafon, beeline, yota);
        break;

    case 5:

        system("cls");

        cout << "\tYota" << endl
             << "\nТелекоммуникационная компания «Yota» была основана в 2007 "
                "году. "
                "На сегодняшний день это один из самых востребованных "
                "операторов "
                "мобильной связи"
             << endl
             << "на территории России. Компания предлагает большой комплекс "
                "услуг "
                "мобильной связи "
             << endl
             << "и высокоскоростного интернета, включая 4G." << endl
             << endl
             << endl;
        system("pause");
        about_operators(tele2, mts, megafon, beeline, yota);
        break;

    case 6:
        mainMenu();
        break;
    }
}
