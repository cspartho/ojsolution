#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d[6];
    scanf("%d %d %d",&a,&b,&c);
    d[0]=a+b-c;
    d[1]=a-(b+c);
    d[2]=(a*b)+c;
    d[3]=a+(b*c);
    d[4]=a-(b*c);
    d[5]=(a*b)-c;
    sort(d,d+6);

    printf("%d\n",(d[0]));
    return 0;
}
