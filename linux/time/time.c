#include <stdio.h>
#include<time.h>
#include <sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include <unistd.h>
#include <string.h>
const int MAX = 100;
int main()
{
    int file = open("1.txt", O_RDWR,00700);
    char TIME[MAX];
    time_t tnow = time(0);
    struct tm *sttm;
    sttm = localtime(&tnow);
    strftime(TIME, 100, "%Y%m%d%H%M%S", sttm);
    write(file, TIME, strlen(TIME));
    close(file);
    printf("\033[31m %04u-%02u-%02u %02u:%02u:%02u\n \033[0m", sttm->tm_year + 1900, sttm->tm_mon + 1, sttm->tm_mday, sttm->tm_hour, sttm->tm_min, sttm->tm_sec);
}