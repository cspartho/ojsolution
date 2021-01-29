#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,s=0,mx=0;
    cin>>n;
    int a[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
        mx=max(mx,a[i]);

    }
    cout<<mx+s<<endl;

    return 0;
}

