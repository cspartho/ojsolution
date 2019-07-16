#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>mp;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int arr1[m+10],arr2[m+10];
    for(int i=0; i<m; i++) {
        int x,y;
        cin>>x>>y;
        arr1[i]=x;
        arr2[i]=y;
    }
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        mp[x]=i;
    }
    int f=0;
    for(int i=0; i<m; i++) {
        if(mp[arr1[i]]>mp[arr2[i]]) {
            f=1;
            break;
        }
    }
    if(f)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;



    return 0;



}
