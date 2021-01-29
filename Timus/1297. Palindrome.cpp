#include<bits/stdc++.h>
using namespace std;

bool ispai(string s)
{
    int l=s.length();
    for(int i=0; i<l/2; i++)
    {
        if(s[i]!=s[l-i-1])
            return false;
    }
    return true;
}
int main()
{

    string sk,sb,ans;
    int mx=0;
    getline(cin,sk);
    int i=0;
    sk.erase(remove(sk.begin(),sk.end(),' '),sk.end());

    int l,h;
    int k=sk.length();
    for(int i=0; i<k; i++)
       {
        for(int j=i+1; j<=k; j++)
        {
            sb=sk.substr(i,j);
            if(ispai(sb) && sb.length()>mx)
            {
                ans=sk.substr(i,j);
                int l=ans.length();
                mx=max(mx,l);

            }
        }
       }
    cout<<ans<<endl;;

    return 0;
}
