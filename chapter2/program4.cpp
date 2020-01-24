/*  
    Mohammed aljubori 
    Info 450, Professor Fauerbach
*/
#include <iostream>
using namespace std;

int main()
{
    double gallons;
    double liters;
    cout << "Enter number of gallons: ";
    cin >> gallons;
    liters = gallons * 3.7854;
    cout << "Liters: " << liters << "\n";
    return 0;
}