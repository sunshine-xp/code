#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define BIGINT_RADIX 10000
#define RADIX_LEN 4
#define MAX_LEN (100 / RADIX_LEN + 1)

char    a[ MAX_LEN * RADIX_LEN ], b [ MAX_LEN * RADIX_LEN ];
int     x[ MAX_LEN ],y[ MAX_LEN ],z[ MAX_LEN ];


/**
 * @brief 
 * @param parameter-name description
 * @param parameter-name description
 * @return 
 * 
 */

void bigint_print(const int x[],const int n) {

    int     start_output = 0;
    for(int i = n - 1; i >= 0; --i) {

        if(start_output) printf("%04d",x[i]);
        else if(x[i] > 0) {
            printf("%d",x[i]);
            start_output = 1;
        }
    }
    if(!start_output) printf("0");
}

/**
 * @brief 
 * @param parameter-name description    
 * 
 * 
 */

void bigint_input(const char s[],int   x[]) {
    int i,j = 0;
    const int len = strlen(s);
    for(i = 0;i<MAX_LEN;i++) x[i] = 0;
    //for(i = len - 1;i >= 0; i--) a[j++] = s[i] - '0';
    for( i = len ; i > 0 ; i -= RADIX_LEN) {
        int  temp = 0;
        int k;
        const int low = i - RADIX_LEN > 0? i-RADIX_LEN : 0;
        for(k = low;k<i;k++) {
            temp = temp *10 + s[k] - '0';
        }
        x[j++] = temp;
    }
}

/**
 * @brief 
 * 
 * 
 * 
 */

static int length(const int x[]) {
    int i;
    int result = 0;
    for(i = MAX_LEN - 1;i >= 0; i--) if(x[i] > 0) {
        result = i + 1;
        break;
    }
    return result;
}
/**
 * @brief 
 * 
 * @param x 
 * @param y 
 * @return int 
 */
static int bigint_sub(int x[],const int y[]) {

    int i;
    const int lenx = length(x);
    const int leny = length(y);

    if(lenx < leny) return -1;
    else if(lenx == leny) {

        int larger = 0;

        for(i = lenx - 1;i >= 0; i--) {
            if(x[i] > y[i]) {
                larger = 1;
            }
            else if(x[i] < y[i]) {
                if(!larger) return -1;
            }
        }
    }
    for(i = 0;i<MAX_LEN;i++) {
        x[i] -= y[i];
        if(x[i] < 0) {
            x[i] += BIGINT_RADIX;
            x[i+1] --;
        }
    }
    return 1;
}
/**
 * @brief 
 * 
 * @param x 
 * @param y 
 * @param z 
 */
void bigint_div(int x[],const int y[],int z[]) {
    int i;
    int *yy;
    const int xlen = length(x);
    int ylen = length(y);
    const int times = xlen - ylen;

    for(i = 0;i<MAX_LEN;i++) z[i] = 0;
    if(times < 0) return ;
    yy = (int*)malloc(sizeof(int)*MAX_LEN);
    memcpy(yy,y,sizeof(int)*MAX_LEN);

    for(i = xlen - 1;i >= 0; i--) {
        if(i >= times) yy[i] = yy[i - times];
        else yy[i] = 0;
    }

    ylen = xlen;


    for(i = 0;i <= times; i++) {
        int j;
        while(bigint_sub(x,yy) >= 0) {
            
            z[times - i] ++;
        }

        for(j = 1; j < ylen; j++) {
            yy[j - 11] = yy[j];
        }
        yy[--ylen] = 0;
    }
    for(i = 0;i<MAX_LEN - 1; i++) {
        if(z[i] >= BIGINT_RADIX) {
            z[i+1] += z[i]/BIGINT_RADIX;
            z[i] %= BIGINT_RADIX;
        }
    }
    free(yy);
}

int main()
{
    int T;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%s%s",a,b);

        bigint_input(a,x);
        bigint_input(b,y);

        bigint_div(x,y,z);
        bigint_print(z,MAX_LEN);
        printf("\n");
    }
}