#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[104];
    scanf("%s",c);
    int l=strlen(c);
    int a[l+5];
    int b[l+5];
    for(int i=0; i<l; i++)
    {
        a[i]=c[i]-'a';
    }
    b[0]=a[0];
    if(a[0]<5)
    {
        b[0]=b[0]+26;
    }
    for(int i=1; i<l; i++)
    {
        int j=1;
        while((b[i]=a[i]+j*26))
        {
            if(b[i]%26==a[i]&& b[i]>=b[i-1])
                break;
            j++;
        }
    }
    printf("%c",b[0]-5+'a');
    for(int i=1; i<l; i++)
    {
        int j=abs(b[i]-b[i-1]);
        printf("%c",j+'a');
    }
    printf("\n");
    return 0;
}
