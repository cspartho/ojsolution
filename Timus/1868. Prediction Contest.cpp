#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<int,int>ans;
int main() {
    string s;
    for(int i=0; i<12; i++)
        cin>>s;
    int t,m;
    cin>>t;

    for(int i=0; i<t; i++) {
        cin>>m;
        cin.ignore();
        for(int j=0; j<m; j++) {
            string t;
            getline(cin,t);
            t.erase(remove_if(t.begin(), t.end(), ::isspace), t.end());
            mp[t]++;

        }
    }
    /* int mx=0,c=0;
     for(auto it:mp) {
         mx=max(mx,it.second);
     }
     {
         for(auto it:mp) {
             if(it.second==mx)
                 c++;
         }
     }

     */
    //cout<<(mx+c-1)*5<<endl;
    int mx=0;
    for(auto it:mp) {
        if(it.second==mx)
            mx= ans[it.second]++;
    }
    cout << 5 * (*(--ans.end())).second << endl;

    return 0;
}
