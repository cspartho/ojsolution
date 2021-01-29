#include<bits/stdc++.h>
using namespace std;
bool card[1001];
int n;
bool out(int h) {
    return h<0||h>n;
}
int main() {
    int m;
    cin>>n>>m;
    int arr[n+10];
    bool check=false;
    for(int i=0; i<m; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    memset(card,false,sizeof(card));
    for(int i=0; i<m; i++) {
        if(out(arr[i])) {
            check =true;
            break;
        }
        if(arr[i]>0 && card[arr[i]]==false)
            card[arr[i]]=true;
        else if(card[arr[i]+1]==false) {
            card[arr[i]+1]=true;
            if(out(arr[i]+1)) {
                check=true;
                break;
            }
        } else {
            check=true;
            break;
        }
    }
    if(check==false)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;

}
