#include<stdio.h>
#include<string.h>


#define BIGINT_RADIX 10000
#define RADIX_LEN 4
#define MAX_LEN (100 / RADIX_LEN + 1)

char    a[ MAX_LEN * RADIX_LEN ], b[MAX_LEN * RADIX_LEN ];
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


void bigint_sub(const int x[],const int y[],int z[]) {

    int i;
    for(i = 0;i<MAX_LEN;i++) z[i] = 0;
    for(i = 0;i<MAX_LEN;i++) {
        z[i] += z[i]-y[i];
        if(z[i] < 0) {
            z[i] += BIGINT_RADIX;
            z[i+1] --;
        }
    }
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

        bigint_sub(x,y,z);
        bigint_print(z,MAX_LEN);
        printf("\n");
    }
    
}


















