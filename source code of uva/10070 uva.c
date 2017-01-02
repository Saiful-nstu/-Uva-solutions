#include<stdio.h>
int main()
{
    long long y;
    int count;
    while(scanf("%lld",&y)==1)
    {
        count=0;
        if(y >= 2000 && y%4 == 0 && y % 100 != 0 || y % 400 == 0){
            if(y%15==0){
                count = 1;
            }
            else if(y%55==0){
                count = 3;
            }
            else
                count=2;
            if(count==2)
                printf("This is leap year.\n");
            else if(count==1)
                printf("This is leap year.\nThis is huluculu festival year.\n");
            else if(y==3)
                printf("This is leap year.\nThis is buluculu festival year.\n");
        }
        else if(y>=2000&&y%15==0)
            printf("This is huluculu festival year.\n");
        else if(y%55==0)
            printf("This is buluculu festival year.\n");
        else
            printf("This is an ordinary year.\n");
        printf("\n");
    }
    return 0;
}
