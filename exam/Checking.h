#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

class Checking : public Account{
  private:
    int last10checks[10];
  public:
    void WriteCheck(int checknum, double amount);
    Checking();
    Checking(string name, long taxID, double balance);
    void display();
};