#include<stdio.h>
int main()
{
    long int i,t,j,temp;
    while(scanf("%ld",&t)==1&&t)
    {
        long int a[t];
        for(i=0;i<t;i++){
            scanf("%ld",&a[i]);
        }
        for(j=0;j<101;j++){
            for(i=j+1;i<t;i++){
                if(a[j]>a[i]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<t;i++){
            printf("%ld ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
*/
