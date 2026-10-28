// cardholder.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include "BasePlasticCard.h"
#include "BaseBankCard.h"
#include "CardCredit.h"
#include "BasePasskey.h"
#include "Ticket.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // Для rand()

using namespace std;

int main() {
    system("chcp 1251"); // Переводим кодировку в стандартную русскую для подключения кириллицы

    srand(time(0)); // Инициализация рандома для генератора

    // Массивы для хранения разных типов (чтобы не смешивать банковские и пропуска)
    vector<BasePlasticCard*> bankCards;
    vector<BasePasskey*> passKeys;

    while (true) {
        system("cls"); // Очистка экрана
        cout << "=== КАРТХОЛДЕР ===" << endl;
        cout << "[1] Выпустить Дебетовую карту" << endl;
        cout << "[2] Выпустить Кредитную карту" << endl;
        cout << "[3] Создать Пропуск (AccessKey)" << endl;
        cout << "[4] Создать Проездной (Ticket)" << endl;
        cout << "[5] Показать всё" << endl;
        cout << "[0] Выход" << endl;
        cout << "Выбор: ";

        int choice;
        cin >> choice;

        if (choice == 0) break;

        switch (choice) {
        case 1: {
            break;
        }
        case 2: {
            string name;
            cout << "Введите имя владельца: "; cin >> name;
            bankCards.push_back(new CardCredit(name));
            cout << "кредитная карта создана!" << endl;
            system("pause");
         
            break;
        }
        case 3: {
         
            break;
        }
        case 4: {
            string name, org;
            cout << "Введите имя: "; cin >> name;
            cout << "Введите организацию: "; cin >> org;
            passKeys.push_back(new Ticket(name, org, 500.0f)); // Депозит 500
            cout << "Проездной создан!" << endl;
            system("pause");
            break;
        }
        case 5: {
            cout << "\n--- БАНКОВСКИЕ КАРТЫ ---\n";
            for (auto card : bankCards) {
                card->showInfo();
                //  (оплата и обслуживание)
                card->payDeposit(100);
            }
            cout << "\n--- ПРОПУСКА/ПРОЕЗДНЫЕ ---\n";
            for (auto pass : passKeys) {
                pass->showInfo();
                pass->Pass(); // проход
            }
            system("pause");
            break;
        }
        }
    }

    // Уборка памяти
    for (auto card : bankCards) delete card;
    for (auto pass : passKeys) delete pass;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
