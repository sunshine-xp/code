#include<iostream>
using namespace std;
#define ADD OX01
#define MUL 0x02
#define SUB 0X03
#define DIV 0X04
#define FADD OX05
#define FMUL 0x06
#define FSUB 0X07
#define FDIV 0X08
#define LOAD 0X09
#define RET 0X0A
typedef unsigned int  REG;
class CPU
{
    private:
        //段寄存器 标记代码、数据、栈空间的内存块
        REG CS;
        REG DS;
        REG SS;
        REG ES;
        REG FS;
        REG GS;
        //通用寄存器
        REG EAX;//累加器
        REG EBX;//内存指针，基址寄存器
        REG ECX;//循环控制，计数器
        REG EDX;//整数乘法、整数除法
        REG ESI;//串指令原指针，索引寄存器
        REG EDI;//串指令的目标指针、索引寄存器
        REG EBP;//栈指针
        REG ESP;//栈帧基址指针
        //指令寄存器
        REG EIP;

        REG EFLAGS;
        /**
         * 0 进位标志 CF
         * 1 保留
         * 2 奇偶校验标志 PF
         * 3 保留
         * 4 辅助进位标志 AF
         * 5 保留
         * 6 零标志 ZF
         * 7符号标志 SF
         * 8 陷阱标志 TF
         * 9 中断启用标志 IF
         * 10 方向标志 DF
         * 11 溢出标志 OF
         * 12 I/O特权级别位 0 IOPL
         * 13 I/O特权级别位 1 IOPL
         * 14 任务嵌套 NT
         * 15 保留
         * 16 恢复标志 RF
         * 17 虚拟8086模式 VM
         * 18 对齐检查 AC
         * 19 虚拟中断标志 VIF
         * 20 虚拟中断悬而未决 VIP
         * 21 ID标志 ID
         * 22-31 保留
         * 
         */
    public:
        CPU();
        void addi(REG &R1,REG &R2,REG &RR3);
        void faddi(REG &R1,REG &R2,REG &RR3);
        void addf(REG &R1,REG &R2,REG &RR3);
        void faddf(REG &R1,REG &R2,REG &RR3);
        void subi(REG &R1,REG &R2,REG &RR3);
        void fsubi(REG &R1,REG &R2,REG &RR3);
        void subf(REG &R1,REG &R2,REG &RR3);
        void fsubf(REG &R1,REG &R2,REG &RR3);
        void muli(REG &R1,REG &R2,REG &RR3);
        void fmuli(REG &R1,REG &R2,REG &RR3);
        void mulf(REG &R1,REG &R2,REG &RR3);
        void fmulf(REG &R1,REG &R2,REG &RR3);
        void divi(REG &R1,REG &R2,REG &RR3);
        void fdivi(REG &R1,REG &R2,REG &RR3);
        void ret();
        ~CPU();
};