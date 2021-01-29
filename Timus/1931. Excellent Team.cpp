#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int solve(int arr[],int n) {
    int res=arr[0];
    for(int i=1; i<n; i++) {
        if(res<arr[i]) {
            res=arr[i];
        }
    }
    return res;
}
int main() {

    int n;
    cin>>n;
    int arr[n+10];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<solve(arr,n)<<endl;


}
