#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n,m,c=0;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int ar[m+5];
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
    }
   for(int i=0;i<m;i++)

    {
        if(binary_search(a,a+n,ar[i]))
        {
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}
