/*  
    Mohammed aljubori 
    Info 450, Professor Fauerbach
*/
#include <iostream>
using namespace std;

double calculateCircumference(double radius);

const float PI = 3.14159265358979323846;

int main()
{
    double radius = 0;
    double circumference = 0;
    cout << "Please enter a radius, and I will calculate the circumference.\n";
    cin >> radius;
    circumference = calculateCircumference(radius);
    cout << "A circle with radius " << radius << " has a circumference of " << circumference;
}

double calculateCircumference(double radius){
    double circumference;
    circumference = 2 * PI * radius;
    return circumference;
}