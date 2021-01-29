#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float r,h,a,d;
    cin>>h>>r;
    a=r*r*PI-(r-h)*sqrt(2*r*h-h*h);
    cout<<a<<endl;
    return 0;
}
