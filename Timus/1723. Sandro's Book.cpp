#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>mp;
int main()
{
    int n,s=0,mx=0,k=0;
    char c[60],ct;
    scanf("%s",c);
    int len=strlen(c);
    for(int i=0;i<len;i++)
     {
         mp[c[i]]++;
     }
    for(auto it:mp)
    {
        if(it.second>mx)
        {
            mx=it.second;
            ct=it.first;

        }

    }
    cout<<ct<<endl;
    return 0;
}
