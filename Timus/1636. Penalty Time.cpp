#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n,m,s,f;
    cin>>n>>m;
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9>>a10;
    s=a1+a2+a3+a4+a5+a6+a7+a8+a9+a10;
    f=s*20;
    if(f+n>m)
    {
        cout<<"Dirty debug :("<<endl;
    }
    else
         cout<<"No chance."<<endl;

    return 0;
}
