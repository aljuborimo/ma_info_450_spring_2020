/*  
    Mohammed aljubori 
    Info 450, Professor Fauerbach
*/
#include <iostream>
using namespace std;

int main()
{
    double userNum = 1.0;
    double squaredValue;
    cout << "Please enter a positive value to get the square as a result. \n";
    cout << "Enter 0 to exit. \n"; 
    while(userNum != 0)
    {
        cin >> userNum;
        if (userNum == 0)
            break;
        squaredValue = userNum * userNum;
        cout << "The squared value is: " << squaredValue << "\n";
    }
    return 0;
}