#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f,x,div=0;
    cin>>a>>b>>c>>d>>e>>f;
    cin>>x;
    int sum=a*10+b*50+c*100+d*500+e*1000+f*5000;

    if(x==10 && a>0)
        div=a;
    else if(x==50 &&b>0)
        div=b;
    else if(x==100 &&c>0)
        div=c;
    else if(x==500 &&d>0)
        div=d;
    else if(x==1000 && e>0)
        div=e;
    else if(x==5000&&f>0)
        div=f;
    if(div)
    {
        cout<<div<<endl;
        cout<<sum/x<<endl;
    }
    else
    {
        int j=sum/2;
        cout<<j/x<<endl;
        while(j<sum)
        {
            j+=x;
            cout<<j/x<<" ";
        }
    }


    return 0;
}
