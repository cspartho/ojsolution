#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<string,int>::iterator it;
int main()
{
    ios::sync_with_stdio(false);
    int n;

    cin>>n;
    string s[n+5],si;
    for(int i=0; i<n+1; i++)
    {

        cin>>s[i];
        if(s[i].length()==1)
        {
            si=s[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(s[i][0]==si[0])
        {
            mp[s[i]]++;
        }
    }
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<endl;
    }
    return 0;
}
