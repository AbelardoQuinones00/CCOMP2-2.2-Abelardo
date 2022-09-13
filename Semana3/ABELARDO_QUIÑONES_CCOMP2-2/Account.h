#include <iostream>
#include <string>
class Account {
public:
    Account(std::string accountName, int initialBalance)
    : name{accountName}{
        if (initialBalance > 0) {
            balance = initialBalance;
    }
}

void deposit(int depositAmount) {
    if (depositAmount > 0) {
        balance = balance + depositAmount;
    }
}

void withdraw(int withdraw){
    if (withdraw < balance){
        balance = balance - withdraw;
    }
    else{
        std::cout << "Withdrawa1 amount exceeded account balance." << std::endl;
    }
}

int getBalance() const {
    return balance;
}

void setName(std::string accountName) {
    name = accountName;
}

std::string getName() const {
    return name;
}

private:
    std::string name;
    int balance{0};
};
