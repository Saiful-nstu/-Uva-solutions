#include<stdio.h>
#define pi 3.1415926536
int main()
{
    int t,len;
    double w,r,cir_area,rec_area;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&len);
        w=(6.0/10.0)*len;
        r=(1.0/5.0)*len;
        cir_area=pi*r*r;
        rec_area=(len*w)-cir_area;
        printf("%.2lf %.2lf\n",cir_area,rec_area);
    }
    return 0;
}

