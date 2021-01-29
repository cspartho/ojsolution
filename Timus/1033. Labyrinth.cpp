#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,c=0;
    cin>>n;
    string s[n+2];
    for(int i=0; i<n; i++)
    {
        string si;
        cin>>si;
        s[i]=si;
    }
    for(int i=0; i<n; i++)
    {
        int j=0;
        while(s[i][j]!='#' && j<s[i].length())
        {
            c++;
            j++;
        }
    }
    cout<<(c-1)*9<<endl;

    return 0;
}
