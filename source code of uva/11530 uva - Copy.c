///TLE because of using while loop
/**#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int j,sum=0,c=0,t;
    while(scanf("%d",&t)){
        getchar();
        while(t--){
            gets(a);

        for(j=0;j<strlen(a);j++)
        {
            if(a[j]=='a'||a[j]=='d'||a[j]=='g'||a[j]=='j'||a[j]=='m'||a[j]=='p'||a[j]=='t'||a[j]=='w'||a[j]==' ')
                sum=sum+1;
            else if(a[j]=='b'||a[j]=='e'||a[j]=='h'||a[j]=='k'||a[j]=='n'||a[j]=='q'||a[j]=='u'||a[j]=='x')
                sum=sum+2;
            else if(a[j]=='c'||a[j]=='f'||a[j]=='i'||a[j]=='l'||a[j]=='o'||a[j]=='r'||a[j]=='v'||a[j]=='y')
                sum=sum+3;
            else if(a[j]=='s'||a[j]=='z')
                sum=sum+4;
        }
         printf("Case #%d: %d\n",++c,sum);
        }
    }
    return 0;
}
*/

///AC for loop

#include<stdio.h>
#include<string.h>
int main()
{
    char a[1005];
    long int n,i,k,l,sum,j;
    while(scanf("%ld",&n)!=EOF)
    {
        getchar();
        for(i=1;i<=n;i++)
        {   sum=0;
            gets(a);
            k=strlen(a);
            for(j=0;j<k;j++)
            {
                if(a[j]=='a'||a[j]=='d'||a[j]=='g'||a[j]=='j'||a[j]=='m'||a[j]=='p'||a[j]=='t'||a[j]=='w'||a[j]==32)
                sum=sum+1;
                else if(a[j]=='b'||a[j]=='e'||a[j]=='h'||a[j]=='k'||a[j]=='n'||a[j]=='q'||a[j]=='u'||a[j]=='x')
                sum=sum+2;
                else if(a[j]=='c'||a[j]=='f'||a[j]=='i'||a[j]=='l'||a[j]=='o'||a[j]=='r'||a[j]=='v'||a[j]=='y')
                sum=sum+3;
                else if(a[j]=='s'||a[j]=='z')
                sum=sum+4;
            }
            printf("Case #%ld: %ld\n",i,sum);
        }
    }
    return 0;
}
