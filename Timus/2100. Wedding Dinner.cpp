#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        c++;
        int l=s.length();
        if(s[l-4]=='+')
        {
            c++;
        }
    }
    if(c+2==13)
    {
        c++;
    }
    cout<<(c+2)*100<<endl;
    return 0;
}
