#include<stdio.h>
#include<math.h>
int main()
{
    long long a;
	while(scanf("%lld",&a)==1&&a){
		printf("%s\n",(sqrt(a)*sqrt(a))==a?"yes":"no");
	}
	return 0;
}



#include<math.h>
#include<stdio.h>
int main()
{
    long long a,root;
	while(scanf("%lld", &a) == 1) {
		if(a == 0) break;
		root = sqrt(a);
		printf("%s\n", (root * root) == a? "yes" : "no");
	}
	return 0;
}
