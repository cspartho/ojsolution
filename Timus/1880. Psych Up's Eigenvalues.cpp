#include<bits/stdc++.h>
using namespace std;
int arr[4000005];
int main()
{
    int n,m,p,c=0,d=0;
    cin>>n;
    for(int j=0; j<n; j++)
    {
        cin>>arr[j];
    }
    cin>>m;
    for(int j=n; j<n+m; j++)
    {
        cin>>arr[j];
    }
    cin>>p;
    for(int j=n+m; j<n+m+p; j++)
    {
        cin>>arr[j];
    }
    sort(arr,arr+n+m+p);
    for(int i=1; i<=n+m+p; i++)
    {
        if(arr[i]==arr[i-1]&& arr[i]==arr[i+1])
        {
            c++;

        }
    }
    cout<<c<<endl;

    return 0;
}
