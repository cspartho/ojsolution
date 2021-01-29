#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    double c;
    cin>>a>>b;
    c=b/a;
    cout<<max(int(c*a),int(c*b))<<endl;


    return 0;
}
