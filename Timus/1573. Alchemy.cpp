#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int>mp;
int binomialCoeff(int n, int k)
{

  if (k==0 || k==n)
    return 1;

  return  binomialCoeff(n-1, k-1) + binomialCoeff(n-1, k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int b,r,y,n;
    cin>>b>>r>>y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    int b1=binomialCoeff(b,mp["Blue"]);
    int b2=binomialCoeff(r,mp["Red"]);
    int b3=binomialCoeff(y,mp["Yellow"]);

    cout<<(b1*b2*b3)<<endl;

    return 0;
}
