#include<stdio.h>
int main()
{
    long int a,b,c,d;
    int t;
    while(scanf("%d",&t)==1){
        while(t--){
            scanf("%ld %ld",&a,&b);
            if((a<b) || (a-b%2)==1){
                printf("impossible\n");
            }
            else{
                c=(a-b)/2;
                d=c+b;
                printf("%ld %ld\n",d,c);
            }
        }
    }
    return 0;
}
