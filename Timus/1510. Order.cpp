#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    int mx=0,ks=0;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second >mx)
        {
            mx=max(mx,it->second);
            ks=it->first;
        }

    }
    cout<<ks<<endl;

    return 0;
}
