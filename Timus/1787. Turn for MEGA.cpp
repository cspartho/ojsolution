#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s=0,d;
    int arr[101],b[101]={0};
    cin>>n>>k;
    for(int i=0; i<k; i++)
    {
        cin>>arr[i];
          if(arr[i]>=n)
        {
        	b[i]=arr[i]-n;
        }
        else
        b[i]=0;


        arr[i+1]=arr[i+1]+b[i];

    }

    for(int i=0; i<k; i++)
    {
        if(arr[i]>=n)
        {
        	b[i]=arr[i]-n;
        }
        else
        b[i]=0;


        arr[i+1]=arr[i+1]+b[i];
    }
    cout<<b[k-1]<<endl;


    return 0;
}
