#include<bits/stdc++.h>
using namespace std;

map<string,int>mp;
vector<int>adj[305];
int visit[305];
int level[305];
queue<int>q;

void bfs(int s)
{
    visit[s]=1;
    level[s]=1;
    q.push(s);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int u:adj[x])
        {
            if(visit[u])
                continue;
                visit[u]=1;
            level[u]=level[x]+1;
            q.push(u);
        }
    }

}
int main()
{
    int nod;
    string  x,y,z,g;
    cin>>nod;
    int v=0;
    for(int i=0; i<nod; i++)
    {
        cin>>x;
        cin>>y;
        cin>>z;
        const string s=x;
        if(mp.find(x)==mp.end()) mp[x]=v++;
        if(mp.find(y)==mp.end()) mp[y]=v++;
        if(mp.find(z)==mp.end()) mp[z]=v++;

        int a=mp[x],b=mp[y],c=mp[z];

        adj[a].push_back(b);
        adj[b].push_back(a);
        adj[b].push_back(c);
        adj[c].push_back(b);
        adj[c].push_back(a);
        adj[a].push_back(c);

g=s;
    }


    g="gerostratos";

    level[mp[g]]=1;
    bfs(1);
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(level[it->second])
            cout<<it->first<<" "<<level[it->second]-1<<endl;
        else
            cout<<it->first<<" "<<"undefined"<<endl;
    }
    return 0;
}
