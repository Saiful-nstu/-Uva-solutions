#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,a[100];
    while(scanf("%d",&t)==1)
    {
        for(int i=0;i<tit++){
            scanf("%d",&n);
            for(int j=0;j<n;j++){
                scanf("%d",&a[i]);
            }
            for(int k=0;k<n;k++){
                for(l=1;l<n;l++){
                    if(k[i]>l[i]){
                        int temp=k[i];
                        k[i]=l[i];
                        l[i]=temp;
                    }
                }
            }
            int sum=0;
            sum=(a[n-1]-a[0])*2;
            printf("%d\n",sum;)
        }
    }
    return 0;
}
