#include <iostream>
#include <string>
#include "Checking.h"

using namespace std;

void Checking::WriteCheck(int checknum, double amount){
  for(int x = 9; x >= 1; x--){
    last10checks[x] = last10checks[x-1];
  }
  last10checks[0] = checknum;
  MakeDeposit(-amount);
}

Checking::Checking():Account(){
  for(int x = 0; x <= 9; x++){
    last10checks[x] = 0;
  }
}

Checking::Checking(string name, long taxID, double balance) : Account(name, taxID, balance){
  for(int x = 0; x <= 9; x++){
    last10checks[x] = 0;
  }
}

void Checking::display(){
  cout << "Last 10 check numbers: " << endl;
  for(int x = 0; x <= 9; x++){
    cout << last10checks[x] << endl;
  }
  cout << "Deposit Record: " << numdeposits << endl; 
}


