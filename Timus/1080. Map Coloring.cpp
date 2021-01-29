#include<bits/stdc++.h>
using namespace std;
vector<int>adj[101];
int visit[102];

int color[102];
int c=0;


bool dfs(int s)
{
    if(visit[s])
        return false;
    visit[s]=1;
    for(int u:adj[s])
    {
        if(!visit[u])
        {
            if(color[s]==0)
            {
                color[u]=1;

            }
            else
                color[u]=0;

            dfs(u);

        }
        else if(color[s]==color[u])
        {
            c=1;
            return true;

        }

        dfs(u);
    }

    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int edj,nod,t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        while(true)
        {
            int x;
            cin>>x;
            if(x==0)
                break;
            adj[x].push_back(i);
            adj[i].push_back(x);
        }
    }


    if(dfs(1)||c==1)
    {
        cout<<"-1"<<endl;
    }
    else
    {

        for(int i=1; i<=t; i++)
            cout<<color[i];
    }
    cout<<endl;


    return 0;
}

