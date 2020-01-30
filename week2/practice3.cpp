/*  
    Mohammed aljubori 
    Info 450, Professor Fauerbach
*/
#include <iostream>
using namespace std;

int main()
{
    int year;
    bool isLeapYear;
    cout << "Enter a year and I'll tell you if its a leap year \n";
    cout << "Enter 0 to exit \n";
    while(year != 0){
        cin >> year;
        if (year == 0)
            break;
        if( year%4 == 0 && year%100 != 0)
        {
            cout << year << " is a leap year \n";
            continue;
        }
        else if ( year%400 == 0 )
        {
            cout << year << " is a leap year \n";
            continue;
        }
        else if ( year%100 == 0 )
        {
            cout << year << " is not a leap year \n";
            continue;
        }
        cout << year << " is not a leap year \n";
    }
}