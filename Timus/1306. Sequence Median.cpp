#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0; i<n; i++) {
        cin>>arr[i];

    }
    sort(arr,arr+n);
    long double f=0.0;

    int x=n/2;
    if(n%2==0) f=(arr[x-1]+arr[x])/2.0;
    else
        f=arr[x];


    printf("%.1lf\n", f);

    return 0;
}




