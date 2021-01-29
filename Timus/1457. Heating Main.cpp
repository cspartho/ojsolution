#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    double s=0;
    cin>>n;
    int a[n+4];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    printf("%.6f\n",s/n);

    return 0;
}
