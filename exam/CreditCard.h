#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

class CreditCard : public Account{
  private:
    long cardnumber;
    string last10charges[10];
  public:
    void DoCharge(string name, double amount);
    void MakePayment(double amount);
    CreditCard();
    CreditCard(string name, long taxID, double balance);
    void display();
};
