#include<bits/stdc++.h>
using namespace std;
int arr[1234567];
int main()
{
    int n,i;
    arr[0]=0,arr[1]=1;
    while((cin>>n))
    {
        if(n==0)
            break;

        for(i=1; i<=n; i++)
        {
            // if(i%2==0)
            arr[2*i]=arr[i];
            //else if(i%2==1)
            arr[(i*2)+1]=arr[i]+arr[i+1];

        }
        sort(arr,arr+n+1);

        cout<<arr[n]<<endl;
    }

    return 0;
}
