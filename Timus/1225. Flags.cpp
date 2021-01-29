#include<bits/stdc++.h>
using namespace std;
unsigned int  arr[555];
int fact(int n)
{
    arr[1]=1;
    arr[2]=3;
    for(int i=3; i<=n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}

int main()
{
    int  a;
    cin>>a;
   // if(a==1 || a==2)
    {
   //     cout<<"2"<<endl;
    }
//   else
    {
        //cout<<2*fact(a)<<endl;
        printf("%u",2*fact(a));
    }
    return 0;
}
