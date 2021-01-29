#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >st;
vector<pair<int,int>>::iterator it;
bool compare(const pair<int,int>& x,const pair<int,int>& y )
{

    return (x.first>y.first);
}
int main()
{
    std::ios::sync_with_stdio(false);
    int n,m,o;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m>>o;
        st.push_back(make_pair(o,m));
    }
     stable_sort(st.begin(),st.end(),compare);
    for(it=st.begin();it!=st.end();it++)
    {
        cout<<it->second<<" "<<it->first<<endl;
    }

    return 0;
}
