#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1){
    printf((n%(360/(5*12))==0)?"Y\n":"N\n");
    }
    return 0;
}
