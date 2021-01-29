#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>vt;
vector<int>::iterator it;
int main()
{
    int n,m,x,y;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>y;
        vt.push_back(y);
    }
    //sort(vt.begin(),vt.end());
    for(it=vt.begin(); it!=vt.end(); it++)
    {
        int f,ki;
        ki= *it;
        f= 10000-ki;
        if(binary_search(v.begin(),v.end(),f))
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
