#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

void Account::SetName(string name){
  this->name = name;
}

void Account::SetTaxID(long taxID){
  this->taxID = taxID;
}

void Account::SetBalance(double balance){
  this->balance = balance;
}

string Account::GetName(){
  return name;
}

long Account::GetTaxID(){
  return taxID;
}

double Account::GetBalance(){
  return balance;
}

void Account::MakeDeposit(double amount){

  balance = balance + amount;
  
  if(amount>0){
    numdeposits++;
  }
  else if(amount<0){
    numwithdraws++;
  }
  else{
    cout << "Please enter an amount other than 0.";
  }
}

Account::Account(){
  name = "";
  taxID = 0;
  balance = 0;
  numdeposits = 0;
  numwithdraws = 0;
}

Account::Account(string name, long taxID, double balance) : Account(){
  this->name = name;
  this->taxID = taxID;
  this->balance = balance;
}

void Account::display(){
  cout << "Name: " << name << endl;
  cout << "TaxID: " << taxID << endl;
  cout << "Balance: " << balance << endl;
}