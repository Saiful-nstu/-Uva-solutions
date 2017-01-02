#include<stdio.h>
#include<string.h>
int main()
{
    char h[7];
    int cas=1;
    while(scanf("%s",h)){
        if(!strcmp(h,"*")){
            break;
        }
         else if(!strcmp(h,"Hajj")){
            printf("Case %d: Hajj-e-Akbar\n",cas++);
        }
        else if(!strcmp(h,"Umrah")){
            printf("Case %d: Hajj-e-Asghar\n",cas++);
        }
    }
    return 0;
}
