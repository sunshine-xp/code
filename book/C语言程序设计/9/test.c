#include<stdio.h>
typedef struct Point Point;
struct Point {
    int x,y;
    Point* nextp;
};

int main()
{
    Point p,p1={12,23,&p};
    p.nextp = &p1;
    printf("%d %d %ld",p.nextp->x,p.nextp->y,p.nextp);
}