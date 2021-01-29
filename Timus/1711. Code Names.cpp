#include<bits/stdc++.h>
using namespace std;
stack<string>st;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,f=0;
    cin>>n;
    string s[21][21],t,u,v;
    vector<string>ans;
    int arr[n+2];

    for(int i=0; i<n; i++) {
        cin>>t>>u>>v;
        s[i][0]=t;
        s[i][1]=u;
        s[i][2]=v;
        sort(s[i],s[i]+3);
    }
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        arr[i]--;
    }
    st.push(s[arr[0]][0]);
    ans.push_back(s[arr[0]][0]);
    for(int i=1; i<n; i++) {
        for(int j=0; j<3; j++) {
            if(st.top()<s[arr[i]][j]) {
                st.push(s[arr[i]][j]);
                ans.push_back(s[arr[i]][j]);
                break;
            }
        }

    }
    if(st.size()<n)
        cout<<"IMPOSSIBLE"<<endl;
    else {
        for(auto it:ans)
            cout<<it<<endl;
    }
    return 0;
}
