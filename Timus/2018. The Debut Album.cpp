#include<bits/stdc++.h>
using namespace std;
#define MOD 100000007
int main() {
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n+10];
    int mx=max(a,b);
    arr[0]=mx;
    arr[1]=mx;
    for(int i=2; i<n; i++) {
        arr[i]=(arr[i-1]%MOD+arr[i-2]%MOD)%MOD;
    }
    cout<<arr[n-1]<<endl;

}
