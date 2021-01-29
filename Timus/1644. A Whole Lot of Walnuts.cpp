#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,mn=10,mx=0,f=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        string j;
        cin>>x>>j;
        if(j=="hungry")
            mx=max(mx,x);
        else
            mn=min(mn,x);
    }

    if(mx>=mn)
        cout<<"Inconsistent"<<endl;
    else
        cout<<mn<<endl;



    return 0;
}
