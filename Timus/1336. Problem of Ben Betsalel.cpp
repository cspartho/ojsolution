#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;

    if(n==1) {
        cout<<"1"<<endl<<"1"<<endl;
        exit(0);
    }
    for(long long i=1; i<n; i++)
        for(long long j=(int)sqrt(n)+i; j<n; j++)
            if(j*j==i*i*i*n) {
                cout<<j<<endl<<i<<endl;
                exit(0);
            }
    return 0;
}
