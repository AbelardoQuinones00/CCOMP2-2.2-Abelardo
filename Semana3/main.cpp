#include <iostream>
#include "Account.h"
using namespace std;

// Modified Account Class

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    
    // Display initial balance of each object
    cout << "account1: " << account1.getName() << " balance is $" 
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
    cout << "\n\nEnter deposit withdraws for account1: ";
    cin >> withdraw;
    account1.withdraw(withdraw);

    return 0;
}