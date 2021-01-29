#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    string st,st1,rst="";

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        st.push_back(a+'0');
        st1.push_back(b+'0');
    }
    int d=0;
    for(int i=n-1; i>=0; i--)
    {
        int r=((st[i]-'0')+(st1[i]-'0')+d);

        rst.push_back(r%10+'0');
        d=r/10;

    }
    if(d)
        rst.push_back(d+'0');
    reverse(rst.begin(),rst.end());
    cout<<rst<<endl;

    return 0;
}
