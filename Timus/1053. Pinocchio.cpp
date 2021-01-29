#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007;
#define INF 1000000000000000001;
vector<vector<int>>g;
vector<pair<int,int>>wg[12345];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  int a[1010];
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];

  }
   for(int i=1;i<=n;i++)
      {
        a[i+1]= __gcd(a[i+1],a[i]);
      }
      cout<<a[n]<<endl;



  return 0;
}
