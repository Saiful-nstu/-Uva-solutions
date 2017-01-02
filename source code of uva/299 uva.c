#include<stdio.h>
int main()
{
    long long i,t,j,temp;
    int count,n;
    while(scanf("%d",&n)!EOF){
        while(n--)
        {
            scanf("%lld",&t);
            long long a[t];
            for(i=0;i<t;i++){
                scanf("%lld",&a[i]);
            }
            count=0;
            for(j=0;j<t-1;j++){
                for(i=j+1;i<t;i++){
                    if(a[j]>a[i]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                        count++;
                    }
                }
            }
            printf("Optimal train swapping takes %d swaps\n",count);
        }
    }
    return 0;
}
