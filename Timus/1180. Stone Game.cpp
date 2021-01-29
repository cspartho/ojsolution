#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    char s[300];
    int sum=0;
    cin>>s;
    for(int i=0; i<strlen(s); i++)
    {
        sum+=(s[i]-'0');
    }
    if(sum%3==0)
        cout<<"2"<<endl;
    else
    {
        cout<<"1"<<endl;
        cout<<sum%3<<endl;
    }



    return 0;
}
