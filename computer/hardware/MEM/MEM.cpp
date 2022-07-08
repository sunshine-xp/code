#include"MEM.hpp"
#include<iostream>


using namespace std;



MEM::MEM()
{
    cout<<"MEMORY initialization ...\n";
    mem[0xffff0] = 0x02;
    mem[0xffff1] = 0x00;
    mem[0xffff2] = 0x00;
    mem[0xffff3] = 0x00;
    mem[0x19] = 0x0e6f0002;
}

MEM::~MEM()
{
    
}
