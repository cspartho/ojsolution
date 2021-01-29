#include<bits/stdc++.h>
using namespace std;
stack<int>st;
queue<int>q;
vector<int>arr,arr1;
int main()
{
    int n,c=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);

    }
    int j=1,f=0;
    while(!st.empty())
    {
        int t=st.top();
        if(j==t)
        {
            j++;
            f=1;
        }
        else
            f=0;
        st.pop();
    }

    if(f==0)
        cout<<"Cheater"<<endl;
    else
        cout<<"Not a proof"<<endl;
    return 0;
}
