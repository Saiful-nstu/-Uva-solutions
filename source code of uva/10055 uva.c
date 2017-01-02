#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,r;
    while(scanf("%lld %lld",&a,&b)==2){
        r=abs(b-a);
        printf("%lld\n",r);
    }
    return 0;
}
