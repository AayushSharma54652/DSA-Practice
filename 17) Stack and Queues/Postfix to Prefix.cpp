#include <bits/stdc++.h>
using namespace std;

string postToPre(string post_exp)
{
    // Write your code here
    int n = post_exp.size();
    stack<string> st;

    for (int i = 0; i < n; i++)
    {
        char c = post_exp[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            st.push(string(1, c));
        }
        else
        {
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            string con = c + t2 + t1;
            st.push(con);
        }
    }
    return st.top();
}