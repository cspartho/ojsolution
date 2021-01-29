#include<bits/stdc++.h>
using namespace std;

vector<char>prime(1500009,1);

void sieve(int n)
{
    prime[0]=prime[1]=0;
    for(long long i=1; i*i<=n; i++)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i; j<=n; j+=i)
                prime[j]=0;
        }
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,n,c;
    scanf("%d",&t);
    sieve(1000005);
    for(int i=0; i<t; i++)
    {
        scanf("%d",&n);
        c=0;

       for(int i=2;; i++)
        {
            if(prime[i])
            {
                c++;
            }
            if(c==n)
            {
                cout<<i<<endl;
                break;
            }
        }

    }


    return 0;
}
