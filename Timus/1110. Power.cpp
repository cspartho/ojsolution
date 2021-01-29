#include<bits/stdc++.h>
using namespace std;
long long bigmod(long long base,long long power,long long mod)
{
    long long p1,p2;
    if(power==0)
        return 1;
    else if(power%2==0)
    {
        p1=bigmod(base,power/2,mod)%mod;
        return (p1*p1)%mod;
    }
    else if(power%2==1)
    {
        p1=base%mod;
        p2=bigmod(base,power-1,mod)%mod;
        return (p1*p2)%mod;
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    int  m,o,c=1,n;
    cin>>n>>m>>o;
    if(n==0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(int i=0; i<=m; i++)
        {

            if(((n%o)*i)%m==o)
            {
                cout<<i<<" ";
                c=0;
            }

        }
    }
    if(c==1)
    {
        cout<<"-1"<<endl;
    }

    return 0;
}
