#include <iostream>
#include <string>
#include<cstdio>
#include<stdio.h>
#include <cctype>
using namespace std;

int main()
{
    int l;
    string s;
    while(getline(cin,s))
    {

        l=s.length();
        printf("%c",s[0]);
        for(int i=1; i<l; i++)
        {

            if(s[i]=='.'|| s[i]=='?'||s[i]=='!' )
            {
                if(isspace(s[i+1]))
                {
                    s[i+1]=((s[i+2]));
                    cout<<s[i]<<" ";
                    i=i+2;

                }
                else
                    s[i+1]=s[i+1]-32;

            }
            else if(s[i]==('\'')||s[i]=='"'||s[i]==':'||s[i]==';'||s[i]=='_'||s[i]==',')
                s[i]=s[i];
            else if(s[i]!=' '&& s[i]!='\n')
                s[i]+=32;


            printf("%c",s[i]);

        }
        printf("\n");

    }

    printf("\n");

    return 0;
}
