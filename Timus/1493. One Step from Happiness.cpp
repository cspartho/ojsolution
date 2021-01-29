#include<bits/stdc++.h>
using namespace std;

int digit(int m)
{
    int i=0,r,s=0,c=0;
    while(m>0)
    {
        if(c>=3)
            break;
        r=m%10;
        s+=r;
        m=m/10;
        c++;
    }
    return s;
}
int main()
{
    int n,m,p,j,k,e,r;

    cin>>n;
    m=n+1;
    p=n-1;
    j=digit(m/1000);
    k=digit(m);
    e=digit(p/1000);
    r=digit(p);
   if(j==k || e==r)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;

    }
    return 0;
}
