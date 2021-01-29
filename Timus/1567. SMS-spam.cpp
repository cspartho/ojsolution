#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>


#define mod 1000000007
#define inf 1000000000000000001;
#define ll long long

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  int sum=0;
  getline(cin,s);
  int n=s.length();
  for(int i=0;i<n;i++)
  {
    if(s[i]=='a'||s[i]=='d'||s[i]=='g' ||s[i]=='j' ||s[i]=='m' ||s[i]=='p' ||s[i]=='s' ||s[i]=='v' ||s[i]=='y' ||s[i]=='.' || s[i]==' ')
      sum+=1;
    else if(s[i]=='b'||s[i]=='e'||s[i]=='h' ||s[i]=='k' ||s[i]=='n' ||s[i]=='q' ||s[i]=='t' ||s[i]=='w' ||s[i]=='z' ||s[i]==',')
      sum+=2;
      else if(s[i]=='c'||s[i]=='f'||s[i]=='i' ||s[i]=='l' ||s[i]=='o' ||s[i]=='r' ||s[i]=='u' ||s[i]=='x' ||s[i]=='!' )
      sum+=3;
  }
  cout<<sum<<endl;
	return 0;
}
