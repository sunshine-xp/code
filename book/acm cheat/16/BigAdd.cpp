/**
 * @file BIgADD..cpp
 * @author sunshine-xp (https://github.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
#include<string.h>
/* 数组月元素表示4个十进制位，数组是万进制*/
#define BIGINT_RADIX 10000
#define RADIX_LEN 4

#define MAAX_LEN (200 / RADIX_LEN + 1)

char    a[ MAAX_LEN * RADIX_LEN ], b[MAAX_LEN * RADIX_LEN ];
int     x[ MAAX_LEN ],y[ MAAX_LEN ],z[ MAAX_LEN ];

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
    for(i = 0;i<MAAX_LEN;i++) x[i] = 0;
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
 * @brief 大整数家法
 * 
 */

void bigint_add(const int x[],const int y[],int z[]) {
    int     i ;
    for(i = 0;i<MAAX_LEN + 1; i++) z[i] = 0;
    for(i = 0;i<MAAX_LEN + 1; i++) {
        z[i] += x[i] + y[i];
        if(z[i] >= BIGINT_RADIX) {
            z[i] -= BIGINT_RADIX;
            z[i+1]++;
        }
    }
}


int main()
{
    scanf("%s%s",a,b);
    bigint_input(a,x);
    bigint_input(b,y);

    bigint_add(x,y,z);

    bigint_print(z,MAAX_LEN + 1);
    printf("\n");
    return 0;
}



















