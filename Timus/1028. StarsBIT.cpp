#include<bits/stdc++.h>
using namespace std;
int tree[32010];
int ans[15010];
#define r 32005
void update(int index,int val,int n) {

    while(index<=n) {
        tree[index]+=val;
        index+= index & (-index);
    }

}
int query(int index) {
    int sum=0;
    while(index>0) {
        sum+=tree[index];
        index-= index &(-index);
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        x++;
        ans[query(x)]++;
        update(x,1,r);
    }
    for(int i=0; i<n; i++)
        cout<<ans[i]<<endl;
    return 0;
}

