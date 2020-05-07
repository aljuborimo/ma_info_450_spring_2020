#include <iostream>
#include <string>
#include "CreditCard.h"

using namespace std;

void CreditCard::DoCharge(string name, double amount){
  for(int x = 9; x >= 1; x--){
    last10charges[x] = last10charges[x-1];
  }
  last10charges[0] = name;
  MakeDeposit(-amount);
}

void CreditCard::MakePayment(double amount){
  MakeDeposit(amount);
}

CreditCard::CreditCard():Account(){}

CreditCard::CreditCard(string name, long taxID, double balance) : Account(name,taxID,balance){}

void CreditCard::display(){
  cout << "Accounts charged: " << endl;
  for(int i=0;i<10;i++){
    cout << last10charges[i] << endl;
  }
  cout << "\nDeposit Record: "<< numdeposits << endl;
}