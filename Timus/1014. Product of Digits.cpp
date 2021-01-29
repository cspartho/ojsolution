#include<bits/stdc++.h>
using namespace std;
stack<int>digit;
int main()
{
    int n;
    cin>>n;
    if(n>=1 &&n<=9)
    {
        cout<<n<<endl;
        exit(0);
    }
    else if(n==0)
    {
        cout<<"10"<<endl;
        exit(0);

    }

    for(int i=9; i>=2&&n>1; i--)
    {
        while(n%i==0)
        {
            digit.push(i);
            n/=i;
        }
    }
    if(n!=1)
    {
        cout<<"-1"<<endl;
        exit(0);
    }
    long long k=0;
    while(!digit.empty())
    {
        k=k*10+digit.top();
        digit.pop();
    }


    cout<<k<<endl;
    return 0;
}
