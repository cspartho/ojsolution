#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mn=999999;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<=(1<<n); i++)
    {
        int s1=0,s2=0;
        int k=i;
        for(int j=0; j<n; j++)
        {
            if((k& 0x1)==0)
                s1+=arr[j];
            else
                s2+=arr[j];
            k=k>>1;
        }
        mn=min(mn,abs(s1-s2));
    }
    cout<<mn<<endl;


    return 0;

}
