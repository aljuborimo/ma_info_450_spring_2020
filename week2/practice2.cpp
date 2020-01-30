/*  
    Mohammed aljubori 
    Info 450, Professor Fauerbach
*/
#include <iostream>
using namespace std;

int main()
{
    int userNum = 1;
    bool isPrime = false;
    cout << "Please enter a number, and I will tell you if it's prime \n";
    cout << "Enter 0 to exit. \n";
    while(userNum != 0)
    {
        cin >> userNum;
        if (userNum == 0)
            break;
        isPrime = true;
        if (userNum == 1) 
        {
            cout << userNum << " is not a prime number \n"; 
            continue;
        }
        for (int i = 2; i < userNum; i++) 
        {
            if (userNum % i == 0) 
            {
                isPrime = false;
            }
        }
        if (isPrime)
            cout << userNum << " is a prime number \n";
        else 
            cout << userNum << " is not a prime number \n";
        
    }
}