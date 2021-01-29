#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1005],s,k=1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    s=a[0];
    for(int i=1; i<=n; i++)
    {
        if(s==a[i])
        {
            k++;
        }
        else
        {
            cout<<k<<" "<<a[i-1]<<" ";
            s=a[i];
            k=1;
        }
    }
    cout<<endl;

    return 0;
}
