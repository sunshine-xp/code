#include<iostream>
using namespace std;
typedef unsigned int  REG;
class CPU
{
    private:
        //段寄存器 标记代码、数据、栈空间的内存块
        REG CS;//
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
        CPU(MEM &mem);
        void run();
        ~CPU();
};

/**
 * 0X01 INT
 * 
 */