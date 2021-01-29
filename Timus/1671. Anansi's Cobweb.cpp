#include<bits/stdc++.h>
using namespace std;
map<int,int>parent;
map<int,int>sizes;

int finds(int a)
{
    if(parent[a]==a)
        return a;

    return finds(parent[a]);
}
void init(int n)
{
    for(int i=0; i<=n; i++)
    {
        parent[i]=i;
        sizes[i]=1;
    }
}
void unit(int a,int b)
{
    a=finds(a);
    b=finds(b);
    if(sizes[a]<sizes[b])
    {
        swap(a,b);
    }
    parent[b]=a;
    if(sizes[a]==sizes[b])
        sizes[b]++;

}

int main()
{

    int n,m;
    cin>>n>>m;
    init(n);
    for(int i=1; i<=m; i++)
    {
        int x,y;
        cin>>x>>y;
        unit(x,y);

    }
    int s;
    cin>>s;
    for(int i=1; i<=s; i++)
    {
        int x;
        cin>>x;
        cout<<parent[x]<<" ";

    }
    return 0;
}
