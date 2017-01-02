#include<stdio.h>
int main()
{
    int a,b,c,t;
    while(scanf("%d",&t)==1){
        while(t--){
            scanf("%d %d %d",&a,&b,&c);
            if((a<b+c)&&(b<a+c)&&(c<=b+a))
                printf("OK\n");
            else
                printf("Wrong!!\n");
        }
    }
    return 0;
}
