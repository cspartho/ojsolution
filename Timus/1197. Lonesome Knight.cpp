#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i;
    char c[5];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        cin>>c[0]>>a;

        if((c[0]>='c'&&c[0]<='f')&&(a>=3||a<=6))
            printf("8\n");
        else  if((c[0]>='c'||c[0]<='f')&&(a==2||a==7))
            printf("6\n");
        else if((c[0]=='b'||c[0]=='g')&&(a>=3||a<=6))
            printf("6\n");
        else if((a==1||a==8)&&(c[0]>='c'||c[0]<='f'))
            printf("4\n");
        else if((a>=3||a<=6)&&(c[0]=='a'||c[0]=='h'))
            printf("4\n");
        else if((a==2||a==7)&&(c[0]=='b'||c[0]=='g'))
            printf("4\n");
        else if((a==1||a==8)&&(c[0]=='a'||c[0]=='h'))
            printf("2\n");
        else if((a==1||a==8)&&(c[0]=='b'||c[0]=='g'))
            printf("3\n");
        else if((a==2||a==7)&&(c[0]=='a'||c[0]=='h'))
            printf("3\n");

    }
    printf("\n");
    return 0;
}
