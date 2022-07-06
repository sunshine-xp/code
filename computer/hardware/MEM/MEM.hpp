#define MEMORYSIZE 1024*1024*16
class MEM
{
    public:
        unsigned int addrin;
        unsigned int dataout;
        unsigned int mem[MEMORYSIZE];
    public:
        MEM();
        ~MEM();
};
