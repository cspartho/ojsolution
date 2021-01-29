#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,s,f;
    cin>>a>>b>>c>>d;
    s=a;
    f=c;
    if(a>c)
    {
        cout<<a<<endl;
        return 0;
    }
    while(s<f)
    {
        if(s>f)
        {
            break;
        }
        s+=b;
        f-=d;
    }
    cout<<max(min(s,f+d),max(s-b,f))<<endl;
    return 0;
}
