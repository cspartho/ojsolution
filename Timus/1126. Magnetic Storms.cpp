#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n,c,i=0;
    int arr[25002];
    cin>>n;
    while((cin>>c))
    {
        if(c==-1)
        {
            break;
        }
        arr[i++]=c;

    }
    int sz=i;

for(int i=0;i<=sz-n;i++)
    {
        int *r;
        r=max_element(arr+i,arr+i+n);
        cout<<*r<<endl;
    }


    return 0;
}
