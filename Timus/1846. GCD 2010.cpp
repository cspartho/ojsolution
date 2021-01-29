#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>


#define mod 1000000007;
#define inf 1000000000000000001;
#define ll long long;



using namespace std;

unordered_map<int,int>mp;

#define mx 1000
int arr[mx];
int tree[mx*3];
void build(int node,int begin,int end)
{
    if(begin==end) //same node
    {
        tree[node]=arr[begin];
        return ;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(begin+end)/2;
    build(left,begin,mid);
    build(right,mid+1,end);
    tree[node]= __gcd(tree[left],tree[right]);//calculate sum

}
int query(int node,int begin,int end,int i,int j)
{
    if(i>end || j<begin)
        return 0;
    if(begin>=i && end<=j)
        return tree[node];
    int left=2*node;
    int right=2*node+1;
    int mid=(begin+end)/2;
    int p1=query(left,begin,mid,i,j);
    int p2=query(right,mid+1,end,i,j);
    return __gcd(p1,p2);
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = __gcd(tree[Left],tree[Right]);
}
int main()
{
	ios::sync_with_stdio(false);
  cin.tie(0);
	int n;
	cin>>n;
	char s;
	int x;
  build(1,1,n);
  int k=0;
	for(int i=1;i<=n;i++)
	{
			cin>>s>>x;

			if(s=='+')
        {
          mp[k++]=x;
          update(1,1,n,i,x);


        }
      else if(s=='-')
          {
            mp[i]=1;
            update(1,1,n,mp[i],1);
            //update(1,1,n,i,0);
          }
          cout<<query(1,1,n,1,i)<<endl;
	}


	return 0;
}
