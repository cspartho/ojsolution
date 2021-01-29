#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,s,d=0;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        cout<<(s/d)-1<<" ";
        s=d;
    }
    cout<<endl;
    return 0;
}
