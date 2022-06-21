#define DISKSIZE 1024*1024*512
class DISK
{
private:
    unsigned int disk[DISKSIZE];
    unsigned int in;
    unsigned int out;
public:
    DISK(/* args */);
    ~DISK();
};