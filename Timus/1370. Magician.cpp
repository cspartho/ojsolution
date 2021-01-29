#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(int i=m;i<n+m;i++)
    {
        if(c>=10)
            break;
        cout<<arr[i%n];
        c++;
    }
    cout<<endl;




    return 0;
}
