#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
    while (b != 0)//进位为0时循环终止
	{
		int tmp = a ^ b;//不进位加法
		b = (a & b) << 1;//应进的位
		a = tmp;
	}
    cout<<a<<endl;
}