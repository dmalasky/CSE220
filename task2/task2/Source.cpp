
#include <iostream>
#include <string>

int main()
{
    int id_number = 0;
    std::string account_name = "";
    float balance = 0;


    std::cout << "Enter the name: ";
    std::cin >> account_name;

    std::cout << "Enter the balance: ";
    std::cin >> balance;

    bool done = false;
    while (!done) {

        // Menu
        std::cout << "\nAccount Menu" << std::endl;
        std::cout << "0. Quit Program" << std::endl;
        std::cout << "1. Display Account Information" << std::endl;
        std::cout << "2. Add a deposit to account" << std::endl;
        std::cout << "3. Make a withdrawal\n" << std::endl;
        std::cout << "Please choose an option: ";
        int choice = 0;
        std::cin >> choice;

        switch (choice)
        {
            // Display
        case 1:
        {
            std::cout << "\nAccount ID: " << id_number << " Name: " << account_name << " Balance: " << balance << std::endl;
            break;
        }
        // Deposit
        case 2:
        {
            float amount_to_add = 0;
            std::cout << "\nAmount to deposit: ";
            std::cin >> amount_to_add;

            balance += amount_to_add;
            break;
        }
        // Withdraw
        case 3:
        {
            float amount_to_withdraw = 0;
            std::cout << "\nAmount to withdraw: ";
            std::cin >> amount_to_withdraw;

            balance -= amount_to_withdraw;
            break;
        }
        // Quit
        default:
            done = true;
            break;
        }
    }



}

