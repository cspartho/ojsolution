#include<bits/stdc++.h>
using namespace std;
#define mx 50002
#define mxlg 25
vector<pair<int,int>>g[mx];
int dep[mx];
int level[mx];
int p[mx][22]; //We set k to 16, because 217 is larger than 105 (highest possible N), while 216 is not.
void dfs(int cur,int pre)
{
    level[cur]=level[pre]+1;
    p[cur][0]=pre;
    for(auto it:g[cur])
    {
        if(it.first!=pre)
        {
            dep[it.first]=dep[cur]+it.second;
            dfs(it.first,cur);
        }
    }

}

void lca_init(int N)
{
    int i,j;
    for (i = 0; i < N; i++)
        for (j = 0; 1 << j < N; j++)
            p[i][j] = -1;

    for (i = 0; i < N; i++)
        p[i][0] = N;

    for (j = 1; 1 << j < N; j++)
        for (i = 0; i < N; i++)
            if (p[i][j - 1] != -1)
                p[i][j] = p[p[i][j - 1]][j - 1];

}

int lca_query(int x,int y)
{
    if(level[x]<level[y])
        swap(x,y);

    int dif=level[x]-level[y];

    for(int i=0; i<=mxlg; i++)
        if((dif>>i)&1)
            x=p[x][i];

    if(x==y)
        return x;

    for(int i=mxlg-1; i>=0; i--)
    {
        if(p[x][i]!=p[y][i])
        {
            x=p[x][i];
            y=p[y][i];
        }
    }


    return p[x][0];

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;

    lca_init(n);
    for(int i=1; i<n; i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        g[x].push_back({y,w});
        g[y].push_back({x,w});
    }
    int q;
    cin>>q;
    dfs(0,0);
    lca_init(n);
    for(int i=0; i<q; i++)
    {
        int k,l;
        cin>>k>>l;
        int z=dep[lca_query(k,l)];

        int rs=dep[k]+dep[l]-2*z;
        cout<<rs<<endl;

    }
    return 0;
}
