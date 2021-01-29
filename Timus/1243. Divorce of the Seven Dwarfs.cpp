#include<bits/stdc++.h>
using namespace std;
int mod(string s)
{
    int res=0;
    for(int i=0;i<s.length();i++)
    {
        res=(res*10+(int)s[i]-'0')%7;

    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    string s;
    cin>>s;
    cout<<mod(s)<<endl;

    return 0;
}
