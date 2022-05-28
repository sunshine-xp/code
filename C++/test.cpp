#include<iostream>
#include<map>
using namespace std;

class Test{

    public:
        Test()
        {
            cout<<"Test"<<endl;
        }
};
class Test2{
    public:
    Test2()
    {
        cout<<"Test2"<<endl;
    }
};
int main()
{
    map<Test,Test2> t;
}