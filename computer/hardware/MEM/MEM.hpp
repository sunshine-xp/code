#define MEMORYSIZE 1024*1024*64
class MEM
{
    public:
        unsigned int addrin;
        unsigned int dataout;
        unsigned char mem[MEMORYSIZE];
    public:
        MEM();
        unsigned int getData();
        void setData();
        ~MEM();
};
