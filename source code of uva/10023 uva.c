#include<stdio.h>
#include<math.h>
int main()
{
    long long x,y;
    int t;
    scanf("%d",&t);
    printf("\n");
    while(t--)
    {
        scanf("%lld",&y);
        x=sqrt(y);
        printf("%lld\n\n",x);
    }
    return 0;
}
