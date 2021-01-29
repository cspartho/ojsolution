#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    double s;

    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
   if(n==1)
    {
        printf("%d.00\n",arr[0]);
        return 0;
    }
    sort(arr, arr+n, greater<int>());
     double t=2*sqrt(arr[0]*arr[1]);
    if(n==2)
    {
        printf("%.2f\n",t);
        return 0;

    }
    for(int i=2; i<n; i++)
    {
        s=2*sqrt(t*arr[i]);
        t=s;
    }
   printf("%.2f\n",s);


    return 0;
}
