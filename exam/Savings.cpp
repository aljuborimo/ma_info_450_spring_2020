#include <iostream>
#include <string>
#include "Savings.h"

using namespace std;

void Savings::DoWithdraw(double amount){
  MakeDeposit(-amount);
}

Savings::Savings():Account(){}

Savings::Savings(string name, long taxID, double balance) : Account(name,taxID,balance){}

void Savings::display(){
  cout << "\nDeposit Record: "<< numdeposits << endl;
  cout << "Withdrawal Record: " << numwithdraws << endl;
}