#include<stdio.h>
int main()
{
    long long int a;
    while(scanf("%lld",&a)==1 && a>-1)
    {
        printf("%lld\n",1+(a*(a+1)/2));
    }
    return 0;
}
