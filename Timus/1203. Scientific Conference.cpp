#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,c=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),[](const pair<int,int>&a,const pair<int,int>&b)
    {
        return a.second<b.second;
    });
   int f=0;
    for(auto it:v)
    {
        if(f<it.first)
        {
            c++;
            f=it.second;
        }
    }
    cout<<c<<endl;
    return 0;
}
