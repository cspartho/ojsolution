#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    string s[1];
    cin>>s[0];
    int m,x;
    cin>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>x;
        cout<<a[x]<<endl;
    }


    return 0;
}
