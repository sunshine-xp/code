#include"CPU.hpp"
#include"MEM.hpp"
#include<iostream>

using namespace std;



CPU::CPU(MEM &mem)
{
    cout<<"CPU initialization ...\n";
    CS = 0xffff;
    EIP = 0X0000;
    
    
}
void CPU::run() {
    unsigned int pre = CS<<4|(EIP&0X000F);
    
}

CPU::~CPU()
{
}

