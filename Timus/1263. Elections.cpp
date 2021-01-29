#include<bits/stdc++.h>
using namespace std;
int m[10005];
int main()
{
    int n,x;
    float f,j;
    cin>>n>>j;
    for(int i=0; i<j; i++)
    {
        cin>>x;
        m[x]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(m[i]==0)
        {
            printf("0.00%\n");
        }
        else
        {
            f=float(j/m[i]);


            printf("%.2f%\n",(100/f));
        }
    }
    return 0;
}
