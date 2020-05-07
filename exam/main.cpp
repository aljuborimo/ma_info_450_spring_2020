#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "CreditCard.h"
#include "Checking.h"

using namespace std;

int Menu(){
  int choice;

  cout << "\n1. Savings Deposit";
  cout << "\n2. Savings withdrawal";
  cout << "\n3. Checking Deposit";
  cout << "\n4. Write A Check";
  cout << "\n5. Credit Card Payment";
  cout << "\n6. Make A Charge";
  cout << "\n7. Display Savings";
  cout << "\n8. Display Checking";
  cout << "\n9. Display Credit Card";
  cout << "\n0. Exit\n";

  cin >> choice;
  cout << endl;
  return choice;
}

double getAmount(){
  double amount;

  cout << "Enter an amount: ";
  cin >> amount;
  return amount;
}

int getCheckNum(){
  int checknum;

  cout << "Enter Check Number: ";
  cin >> checknum;
  
  return checknum;
}

int main(){
  Checking checkAccount("John",1,100);
  Savings savingsAccount("Sarah",1,100);
  CreditCard creditcardAccount("Bill",1,100);
  bool running = true;

  while(running){
     cout << "\nChecking balance: $" << checkAccount.GetBalance() << " Savings balance: $" << savingsAccount.GetBalance() << " Card Balance: $" <<  creditcardAccount.GetBalance();
    int choice = Menu();
    double amount;
    int checknum;
    string name;

    switch(choice){
      case 0:
        running = false;
        break;
      case 1:
        amount = getAmount();
        savingsAccount.MakeDeposit(amount);
        break;
      case 2:
        amount = getAmount();
        savingsAccount.DoWithdraw(amount);
        break;
      case 3:
        amount = getAmount();
        checkAccount.MakeDeposit(amount);
        break;
      case 4:
        checknum = getCheckNum();
        amount = getAmount();
        checkAccount.WriteCheck(checknum,amount);
        break;
      case 5:
        amount = getAmount();
        creditcardAccount.MakePayment(amount);
        break;
      case 6:
        cout <<"Enter Charge Name: ";
        cin >> name;
        amount = getAmount();
        creditcardAccount.DoCharge(name,amount);
        break;
      case 7:
        savingsAccount.display();
        break;  
      case 8:
        checkAccount.display();
        break;
      case 9:
        creditcardAccount.display();
        break;
    }
  }
}