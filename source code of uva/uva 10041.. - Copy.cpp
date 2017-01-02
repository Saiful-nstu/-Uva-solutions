#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
	int a[501],i,j,mid,t,m;
	cin>>t;
	while(t--)
	{
		int res=0;
		cin>>m;
		if(m==1)
		{
			scanf("%*d");
			cout<<"0\n";
		}
		else
		{
			for(i=0;i<m;i++)
			{
				cin>>a[i];
			}
			sort(a[0],a[m-1]);
			mid=m/2;
			for(j=0;j<mid;j++)
			{
				res+=(mid-a[j]);
			}
			for(j=mid+1;j<=m;j++)
			{
				res+=(a[j]-mid);
			}
			printf("%d\n",res);
		}
	}
    return 0;
}
