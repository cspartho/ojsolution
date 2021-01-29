#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,s=0,ki=0;
    scanf("%d %d",&n,&k);
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>k)
        {
          s=s+(a[i]-k);
        }
        ki=ki+a[i];
    }
    printf("%d %d\n",s,(n*k)-ki+s);


    return  0;
}
