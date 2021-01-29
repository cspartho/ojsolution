#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<string,int>::iterator itr;
int main()
{
    int n;
    string s;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        ++mp[s];
    }
    for(itr=mp.begin();itr!=mp.end();itr++)
    {
        if((itr->second)>=2)
        {
            cout<<itr->first<<endl;

        }
    }
    return 0;
}
