#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10002],s=0,k;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    k=(n+1)/2;
    for(int i=0; i<k; i++)
    {
        s=s+(a[i]+1)/2;
    }
    printf("%d\n",s);
    return 0;
}

