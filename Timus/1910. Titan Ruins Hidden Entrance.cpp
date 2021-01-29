#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int arr[12345];
    int n,c=0,mx=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    mx=arr[0]+arr[1]+arr[2];
    c=2;
    for(int i=1;i<n-2;i++)
    {
        if(mx<arr[i]+arr[i+1]+arr[i+2])
        {
            mx=arr[i]+arr[i+1]+arr[i+2];
            c=i+2;
        }
    }
    cout<<mx<<" "<<c<<endl;

    return 0;
}
