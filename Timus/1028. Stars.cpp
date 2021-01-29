#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef
tree<
pair<int,int>,
     null_type,
     less<pair<int,int>>,
     rb_tree_tag,
     tree_order_statistics_node_update>
     ordered_set;

main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ordered_set st;
    int n,sz=0;
    cin>>n;
    vector<int>level(n,0);
    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        level[st.order_of_key({x,++sz})]++;
        st.insert({x,sz});
    }
    for(auto it:level)
        cout<<it<<endl;

    return 0;
}
