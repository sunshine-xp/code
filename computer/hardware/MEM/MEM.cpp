#include"MEM.hpp"
#include<iostream>


using namespace std;



MEM::MEM()
{
    cout<<"MEMORY initialization ...\n";
    mem[0xffff0>>2] = 0x10000019;
}

MEM::~MEM()
{
    
}
