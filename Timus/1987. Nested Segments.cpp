#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v[123];
struct Interval {
    int start,end,id;
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    Interval t[n+5];
    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        t[i].start=x;
        t[i].end=y;
        t[i].id=i+1;

    }
    for(int i=0; i<n; i++) {
        cout<<t[i].id<<" "<<t[i].start<<" "<<t[i].end<<endl;
    }




    return 0;

}
