#include<bits/stdc++.h>
using namespace std;
int t;

void removeDupWord(string str)
{
    istringstream ss(str);
    do
    {
        int f=0;
        string word;
        ss >> word;


        if ( (word[ word.length() - 1])=='.' || word[ word.length() - 1]==',' )
            f=1;
        if(f==1)
            reverse(word.begin(),word.end()-1);
        else
            reverse(word.begin(),word.end());

        cout<<word;

        cout<<" ";

    }
    while (ss);


}

int main()
{

    string s[11];
    int i=0;
    while(getline(cin,s[i]))
    {

        i++;

    }
    for(int j=0; j<=i; j++)
    {
        if(s[j].length()>1)
           removeDupWord(s[j]);
        else
            cout<<" "<<endl;

    }


    return 0;
}
