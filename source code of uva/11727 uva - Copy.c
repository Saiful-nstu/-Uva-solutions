#include<stdio.h>
int main()
{
    int t,a,b,c,r,cas=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && b>c && a>c){
            printf("Case %d: %d\n",cas,b);
        }
        else if(a>c && c>b && a>b){
            printf("Case %d: %d\n",cas,c);
        }
        else if(b>a && a>c && b>c){
            printf("Case %d: %d\n",cas,a);
        }
        cas++;
    }
    return 0;
}
