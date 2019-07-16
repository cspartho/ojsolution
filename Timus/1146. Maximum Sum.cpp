#include<bits/stdc++.h>
using namespace std;
int kadane(int temp[],int n)
{
    int curr_sum=temp[0],max_sum=temp[0];
    for(int i=1; i<n; i++)
    {
        {
            curr_sum=max(temp[i],curr_sum+temp[i]);
            max_sum=max(curr_sum,max_sum);
        }

    }
    return max_sum;

}

int main()
{
    int n;
    cin>>n;
    int arr[n+3][n+3];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>arr[i][j];

    int left,right,sum=0,temp[n],max_sum=-9999999;
    for( left=0; left<n; left++)
    {
        memset(temp,0,sizeof(temp));
        for( right=left; right<n; right++)
        {
            for(int i=0; i<n; i++)
               {
                   temp[i]+=arr[i][right];
               }

            sum=kadane(temp,n);
            if(sum>max_sum)
                max_sum=sum;
        }
    }
    cout<<max_sum<<endl;

    return 0;
}
