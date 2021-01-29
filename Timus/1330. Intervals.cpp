#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n+1];

	for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);

    }
    int s=0;
    for(int i=0;i<=n;++i)
    {
        s+=arr[i];
        arr[i]=s;

    }
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		int m,n;
		scanf("%d %d",&m,&n);
		printf("%d\n",arr[n]-arr[m-1]);
	}



	return 0;


}
