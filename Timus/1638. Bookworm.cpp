#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   int a,b,c,d,s=0,e;
    cin>>a>>b>>c>>d;
    e=abs(c-d);
    for(int i=1;i<=e+1;i++)
    {
        s=s+b;
    }
        cout<<s<<endl;


    return 0;
}
