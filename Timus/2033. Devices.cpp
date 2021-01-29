#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<int,string>kp,jp;
vector<pair<int,int>>v;
bool comp(const pair<int,int> &r,const pair<int,int> &t) {
    return r.first>t.first;
}

int main() {
    int n,mx=0,me=999999,ne=1,c=0;
    int arr[7];
    string s,t,as;
    for(int i=0; i<6; i++) {
        cin>>t>>s>>n;
        mp[s]++;
        kp[n]=s;
        me=min(me,n);
        v.push_back(make_pair(mp[s],n));
        arr[i]=n;
    }
    sort(v.begin(),v.end(),comp);
    for(auto it:mp) {
        if(it.second==1)
            c++;
    }
    if(c>=5) {
        cout<<kp[me]<<endl;
        exit(0);
    }
    for(auto it:v) {
        if(it.first==me)
            cout<<kp[it.second]<<endl;
        else
            cout<<kp[*(&it.second+1)]<<endl;
    }
    return 0;
}
