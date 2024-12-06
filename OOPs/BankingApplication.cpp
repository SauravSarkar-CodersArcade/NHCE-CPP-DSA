#include <iostream>
using namespace std;
class BankAccount {
protected:
    int AccountNumber;
    double balance;
    double interestRate;
public:
    BankAccount(int accNum, double bal, double rate){
        AccountNumber = accNum;
        balance = bal;
        interestRate = rate;
    }
    void deposit(double amount){
        balance += amount;
        cout << "Deposited: $" << amount << endl;
        cout << "New Balance: $" << balance << endl;
    }
    void displayBalance(){
        cout << "Account Number: " << AccountNumber << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};
class SavingsAccount : public BankAccount {
private:
    double minimumBalance;
public:
    SavingsAccount(int accNum, double bal, double rate, double minBal)
    : BankAccount(accNum, bal, rate)
    {
        minimumBalance = minBal;
    }
    void withdraw(double amount){
        if (balance - amount >= minimumBalance){
            balance -= amount;
            cout << "Withdrawn $" << amount << endl;
            cout << "New Balance $" << balance << endl;
        } else{
            cout << "Withdrawal failed: Insufficient funds. Minimum balance: $ " << minimumBalance
                    << " must be maintained." << endl;
        }
    }
};
int main() {
//    BankAccount bankAccount(1000, 4000, 4.5);
//    bankAccount.displayBalance();
//    bankAccount.deposit(1000);
//    bankAccount.displayBalance();

    SavingsAccount savingsAccount(10201, 3000, 3.5, 2000);
    savingsAccount.withdraw(1000);
    savingsAccount.withdraw(1);
    return 0;
}
