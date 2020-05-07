#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

class Savings : public Account{
  public:
    void DoWithdraw(double amount);
    Savings();
    Savings(string name, long taxID, double balance);
    void display();
};