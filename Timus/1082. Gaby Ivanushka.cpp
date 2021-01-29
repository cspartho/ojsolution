#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long c,d;
    cin>>n;
    d=n;
    cout<<n<<" ";
    for(int i=2;i<=n;i++)
    {
        c=i*d;

    cout<<c+1<<" ";
    d=c;
    }

    return 0;
}
