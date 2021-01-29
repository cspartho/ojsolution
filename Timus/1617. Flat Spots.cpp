#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int,int>mp;
    int n,s=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        mp[k]++;

    }
    for(auto it:mp)
    {
        if(it.second>=4)
        {

           s+=(it.second/4);
        }
    }
    cout<<s<<endl;

    return 0;
}
