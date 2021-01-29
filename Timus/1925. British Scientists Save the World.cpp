#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int n,m,c=0,s=0,t,e;
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        cin>>t>>e;
        c+=t;
        s+=e;
    }
    int d=c+m-(n+1)*2-s;

    if(d>0)

        cout<<d<<endl;
    else
        cout<<"Big Bang!"<<endl;


    return 0;
}
