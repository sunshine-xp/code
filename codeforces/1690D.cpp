#include <iostream>
 
#define ll long long
 
int main()
{
    ll t, k, n, i, w, wmin;
   
    scanf("%lld", &t);
    
    while(t--)
    {
        scanf("%lld %lld", &n, &k);
        char s[n+1];
        scanf("%s", s);
        w=0;
        
        for(i=0; i<k; ++i)
            if(s[i]=='W')
                ++w;
        wmin = w;     
        for(i=k; i<n; ++i)
        {
            if(s[i]=='W' && s[i-k]=='B')
                ++w;
            else if(s[i]=='B' && s[i-k]=='W')
                --w;
            wmin= w>wmin ? wmin : w;
        }
       printf("%lld\n", wmin);
    }
    
    return 0;
}