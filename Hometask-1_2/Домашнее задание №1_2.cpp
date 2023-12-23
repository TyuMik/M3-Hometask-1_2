// Домашнее задание №1_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>

struct bankAccount {
    long int account_number{};
    std::string person_name;
    long double deposit_money{};
};

void balanceChange(bankAccount &bank_account, long double new_balance) {
    bank_account.deposit_money = new_balance;
};

int main(int argc, char** argv)

{
    setlocale(LC_ALL, "Russian");

    bankAccount bank_account;

    std::cout << "Введите номер счёта: ";
    std::cin >> bank_account.account_number;
    std::cout << std::endl;

    std::cout << "Введите имя владельца: ";
    std::cin >> bank_account.person_name;
    std::cout << std::endl;

    std::cout << "Введите баланс: ";
    std::cin >> bank_account.deposit_money;
    std::cout << std::endl;

    std::cout << "Введите новый баланс: ";
    long double new_balance;
    std::cin >> new_balance;
    std::cout << std::endl;

    balanceChange(bank_account, new_balance);

    std::cout << "Ваш счёт: " << bank_account.person_name << ", " << bank_account.account_number << ", " << bank_account.deposit_money;
    std::cout << std::endl;
   
    return 0;
}