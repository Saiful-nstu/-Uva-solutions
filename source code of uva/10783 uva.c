#include<stdio.h>
int main()
{
    int a,b,sum,t,i,count=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d\n%d",&a,&b);
        sum=0;
        if(a>b){
            for(i=b;i<=a;i++){
                if(i%2)
                {
                    sum+=i;
                }
            }
        }
        else if(b>a){
            for(i=a;i<=b;i++){
                if(i%2)
                {
                    sum+=i;
                }
            }
        }
        printf("Case %d: %d\n",count,sum);
        count++;
    }
    return 0;
}
