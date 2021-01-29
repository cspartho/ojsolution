#include<bits/stdc++.h>
using namespace std;

int in() {
    int n;
    scanf("%d", &n);
    return n;
}

vector<string>g[1004];

int main() {
    int n =in();
    for(int i = 1; i <= n; i++) {
        string s;
        string a, b;
        cin >> s;
        if(s == "PUSH") {
            cin>>a>>b;
            g[a].push_back(b);
        } else {
            cin>>a;
            cout<<g[a].back()<<endl;
            g[a].pop_back();
        }
    }


    return 0;
}
