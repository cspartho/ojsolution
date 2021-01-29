#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[3]= {0},k;
    string s1="Emperor Penguin",s2="Little Penguin",s3="Macaroni Penguin";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s,s0;
        cin>>s>>s0;
        if(s[0]=='E')
            a[0]+=1;
        else if(s[0]=='L')
            a[1]+=1;
        else if(s[0]=='M')
            a[2]+=1;
    }
    int m=0;
    int nm=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<nm; i++)
    {
        if(a[i]>m)
        {

            m=max(m,a[i]);
            k=i;

        }
    }
    if(k==1)
        cout<<s2<<endl;
    else if(k==2)
        cout<<s3<<endl;
    else
        cout<<s1<<endl;



    return 0;
}
