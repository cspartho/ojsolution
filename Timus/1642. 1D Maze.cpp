#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,r,arr[105];
    cin>>n>>r;
    int mn=12345,mx=-12345;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        arr[i]=x;
    }
    sort(arr,arr+n);
    if(r<arr[0] || r>arr[n-1]) {
        cout<<"Impossible"<<endl;
        return 0;
    }
    int d=0,c=0;
    d+=arr[n-1];
    int i=n-2;
    while(i>=0) {
        if(d==r)
            break;
        d+=(arr[i]-arr[i-1]);
        c+=abs(d);
        i--;
    }
    cout<<c<<endl;
    return 0;
}
