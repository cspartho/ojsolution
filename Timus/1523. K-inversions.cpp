#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>
int dp[20010][15];
using namespace std;
using namespace __gnu_pbds;
typedef
tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

int inversion(int n,int k) {
    if (dp[n][k] != -1) return dp[n][k];
    if (k == 0) return dp[n][k] = 1;
    if (n == 0) return dp[n][k] = 0;
    int j = 0, val = 0;
    for (j = 0; j < n && k-j >= 0; j++)
        val += inversion(n-1, k-j);
    return dp[n][k] = val;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,a;
    cin>>n>>k;
  //  for(int i=0;i<n;i++)
      //  cin>>a;
    for(int i=1; i<=n; i++)
        for(int j=0; j<=k; j++)
            dp[i][j]= -1;



    cout<<inversion(n,k)<<endl;

    return 0;
}

