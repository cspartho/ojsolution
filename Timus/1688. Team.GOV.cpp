#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    int m,k;
    cin>>n>>m;
    n=n*3;
    for(int i=0; i<m; i++) {
        cin>>k;
        n-=k;
        if(n<0) {
            cout<<"Free after "<<i+1<<" times."<<endl;
            break;
        }

    }
    if(n>=0)
        cout<<"Team.GOV!"<<endl;
    return 0;

}
