#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[12];
    for(int i=1; i<8; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<9; i++)
    {
        if(((a[2]+a[3]+a[4])%2==a[5])&&((a[1]+a[3]+a[4])%2==a[6])&&((a[1]+a[2]+a[4])%2==a[7]))
            break;
        else
        {
            a[i]= (!a[i]);
            a[i-1]= (!a[i-1]);
        }
    }
    for(int i=1; i<8; i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;


}
