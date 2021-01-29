#include<bits/stdc++.h>
using namespace std;
unordered_map<int,vector<int>>mp;

int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            mp[x].push_back(i);
        }
        int m,f=0;
        cin>>m;
        for(int i=1; i<=m; i++)
        {
            int l,r,x,ct;
            cin>>l>>r>>x;
              if(mp.count(x)==0)
           { cout<<"0";
           continue;
           }
		auto it=lower_bound(mp[x].begin(),mp[x].end(),l);

    	if(it==mp[x].end())
    	{
    		cout<<'0';
    	}

        else if(*it<=r )
        {
            cout<<"1";
        }
        else
            cout<<"0";

    }
    cout<<endl;
    return 0;
}
