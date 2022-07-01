#include"CPU.hpp"
#include<iostream>

using namespace std;



CPU::CPU()
{
    cout<<"CPU initialization ...\n";
}

CPU::~CPU()
{
}
void CPU::addi(REG &R1,REG &R2,REG &RR3) {
    RR3 = R1+R2;
}
void sub(REG &R1,REG &R2,REG &RR3) {

}
