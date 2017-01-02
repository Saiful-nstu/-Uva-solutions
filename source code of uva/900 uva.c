#include<stdio.h>
int main()
{
    long long n,i,a[51];
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        a[1]=1;
        a[2]=2;
        a[3]=3
        for(i=4;i<=n;i++)
            a[i]=a[i-2]+a[i-1];
        printf("%lld\n",a[n]);
    }
    return 0;
}
