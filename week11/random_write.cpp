#include <iostream>
#include <fstream>

using namespace std;

int main() 
{

ofstream fo;
int nums = 1000;

fo.open("randoms.txt");

for(int i=0;i<nums;i++)
{
fo<<rand()%20000 + -10000<<endl;
}

}