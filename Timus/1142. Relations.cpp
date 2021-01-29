#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long int arr[]= {1,3, 13, 75, 541, 4683, 47293, 545835, 7087261, 102247563,1622632573};
    while(cin>>n) {
        if(n<0)
            break;
        cout<<arr[n-1]<<endl;
    }
    return 0;

}
