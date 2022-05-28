#include<fstream>
#include<iostream>
using namespace std;
ifstream fin("2_1read");
ofstream fout("2_1write");
int main()
{
    int a;
    fin >> a;
    int ans = 0;
    while (a)
    {
        a /= 10;
        ans++;
    }
    fout << ans;
    string s = "this is a test";
    fout << s;
    cout << endl;
}