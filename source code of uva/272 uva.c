#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    long long count=0;
    while(scanf("%c",&c)==1){
        if(c=='"'){
            count++;
            if(count%2==1){
                printf("``");
            }
            else if(count%2==0){
                printf("''");
            }
        }
        else
            printf("%c",c);
    }
    return 0;
}
