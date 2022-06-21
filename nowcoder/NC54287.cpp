#include<iostream>
#include<string>
using namespace std;

int main()
{
    string st;
    cin>>st;
    for(int i = 0;i<st.size();i++)
    {
        if(st[i] == '1') cout<<"hongliyu";
        else if(st[i] == '2') cout<<"lvliyu";
        else cout<<"lv";
    }
}