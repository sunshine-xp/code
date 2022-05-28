#include<iostream>
#include<random>
#include<ctime>
using namespace std;
int main()
{
    srand((unsigned int)time(0));
    int rd = rand()%4;
    while (rd!=1)
    {
        rd = rand()%4;
        cout<<rd;
    }
    
}