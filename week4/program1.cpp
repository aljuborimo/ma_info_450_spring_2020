#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
using namespace std;

int main(){
    int int_array[10];

    for (int i = 0; i<10; i++){
        cout << "Enter the int at index " << i << ":";
        cin >> int_array[i];
    }

    double average;
    for (int i = 0; i<10; i++){
        average = average + int_array[i];
    }
    average = average / 10;

    for (int i = 0; i<10; i++){
        int_array[i] = int_array[i]-average;
        int_array[i] = abs(int_array[i]*int_array[i]);
    }

    double stddev;
    for (int i = 0; i<10; i++){
        stddev = stddev + int_array[i];
    }
    
    stddev = sqrt(stddev/10);

cout << "Results: " << average << ", " << stddev;

}