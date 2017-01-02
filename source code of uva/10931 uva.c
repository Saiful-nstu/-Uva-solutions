#include<stdio.h>
int main()
{
    int count;
    unsigned long long binary,decimal,remainder,i;
    while(scanf("%llu",&decimal)==1&&decimal){
            i=1,binary=0,count=0;
            while(decimal!=0){
                remainder=decimal%2;
                if(remainder==1){count++;}
                decimal/=2;
                binary+=i*remainder;
                i*=10;
            }
            printf("The parity of %llu is %d (mod 2).\n",binary,count);
    }
    return 0;
}
