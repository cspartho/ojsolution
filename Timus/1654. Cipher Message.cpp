#include<bits/stdc++.h>
using namespace std;
deque<char>st;
deque<char>::iterator it;
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {

        if(st.front()!=s[i])
        {
            st.emplace_front(s[i]);
        }
        else
            st.pop_front();

    }

    for(it=st.end()-1; it>=st.begin(); it--)
    {
        printf("%c",*it);
    }
    printf("\n");

    return 0;
}
