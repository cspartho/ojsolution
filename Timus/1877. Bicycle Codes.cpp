#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0;
    cin>>a>>b;
    for(int i=0; i<=9999; i++)
    {
        if(i%2==0)
        {
            if(i==a)
            {
                c=1;

            }
        }
        else if(i%2==1)
        {
            if(i==b)
            {
                c=1;

            }
        }
    }


    if(c==0)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;

    return 0;
}
