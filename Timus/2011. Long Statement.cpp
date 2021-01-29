#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n,c=0;
    int arr[123];
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    do
    {
        c++;
        if(c>10)
        {
            break;
        }
    }
    while (next_permutation(arr, arr + n));

    if(c>=6)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    return 0;
}
