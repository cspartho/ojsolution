#include<bits/stdc++.h>
using namespace std;

int main() {

    unsigned long long n,l,sum=0;
    int k;
    cin>>n>>k;
    sum=n;
    for(int i=0; i<k; i++) {
        cin>>l;
        if(l+sum<n)
            sum=0;
        else
            sum+=(l-n);
    }
    if(sum<=0)
        cout<<"0"<<endl;
    else
        cout<<sum<<endl;

    return 0;
}
