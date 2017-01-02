#include<stdio.h>
int main()
{
    long long a,b,temp,cycle,count,i;
    while(scanf("%lld%lld",&a,&b)==2&&a&&b){
        cycle=0;
        printf("%lld %lld ",a,b);
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        while(a<=b){
            count=1;
            for(i=a;i>1;i=i){
                if(i&1)
                    i=3*i+1;
                else
                    i=i/2;
                count++;
            }
            if(count>=cycle)
                cycle=count;
            a++;
        }
        printf("%lld\n",cycle);
    }
    return 0;
}
