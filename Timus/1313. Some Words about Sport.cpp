#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int arr[n+2][n+2];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    cout<<arr[0][0];
    for ( int i = 1; i < n; i++ )
    {
        int r = i, c = 0;
        while ( r >= 0 && c < n )
        {
            printf (" %d", arr [r] [c]);
            r--, c++;
        }
    }

    for ( int i = 1; i < n; i++ )
    {
        int r = n - 1, c = i;
        while ( r >= 0 && c < n )
        {
            printf (" %d", arr [r] [c]);
            r--, c++;
        }
    }
    cout<<endl;
    return 0;
}
