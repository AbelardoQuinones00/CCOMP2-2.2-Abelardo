#include <iostream>
#include "Account.h"
using namespace std;

// Github:
// https://github.com/AbelardoQuinones00/CCOMP2-2.2-Abelardo/tree/main/Semana3/ABELARDO_QUI%C3%91ONES_CCOMP2-2
// Modified Account Class

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    
    // Display initial balance of each object
    cout << "\naccount1: " << account1.getName() << " balance is $" 
        << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" 
        << account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: ";
    
    int depositAmount;
    int withdraw;

    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);

    // Display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
        << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
        << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);

    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
        << account2.getBalance() << endl;

    // Withdraws
    cout << "\n\nEnter withdraw for account1: ";
    cin >> withdraw;
    account1.withdraw(withdraw);
    
    cout << "\nEnter withdraw for account2: ";
    cin >> withdraw;
    account2.withdraw(withdraw);

    cout << "\n\naccount1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
        << account2.getBalance() << endl;
    return 0;
} 