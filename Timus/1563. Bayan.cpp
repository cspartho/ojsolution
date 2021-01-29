#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int>mp;
unordered_map<string,int>::iterator it;
int main()
{
    ios::sync_with_stdio(false);
    int n,mx=0;
    cin>>n;
    string s;
    getline(cin,s);
    for(int i=0; i<n; i++)
    {
        getline(cin,s);
        mp[s]++;

    }
    for(it=mp.begin(); it!=mp.end(); it++)
    {
       if(it->second)
            mx++;

    }
    cout<<n-mx<<endl;

    return 0;
}
