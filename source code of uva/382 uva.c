#include<stdio.h>
int main()
{
    int i,sum,num;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&num)==1){
        if(num==0)
        {
            break;
        }
        else{
            sum=0,i=1;
            while(i<num){
                if(num%i==0) sum+=i;
                i++;
            }
        if(sum==num)
            printf("%5d  PERFECT\n",num);
        else if(sum>num)
            printf("%5d  ABUNDANT\n",num);
        else if(sum<num)
            printf("%5d  DEFICIENT\n",num);
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}
/**#include<stdio.h>
int main()
{
    int n,i,j,k,l,m,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1)
    {
        if(n==0)
          break;
        sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
               sum=sum+i;
        }
        if(sum==n)
        {
            printf("%5d  PERFECT\n",n);
        }
        else if(sum<n)
        {
            printf("%5d  DEFICIENT\n",n);
        }
        else
        {
            printf("%5d  ABUNDANT\n",n);
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}

*/
