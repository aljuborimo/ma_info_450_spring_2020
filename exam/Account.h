#include <iostream>
#include <string>

using namespace std;

#ifndef _Account_h_
#define _Account_h_

class Account{
  private:
    string name;
    long taxID;
    double balance;
  protected:
    int numdeposits;
    int numwithdraws;
  public:
    void SetName(string name);
    void SetTaxID(long taxID);
    void SetBalance(double balance);
    string GetName();
    long GetTaxID();
    double GetBalance();
    void MakeDeposit(double amount);
    Account();
    Account(string name, long TaxID, double balance);
    void display();
};

#endif