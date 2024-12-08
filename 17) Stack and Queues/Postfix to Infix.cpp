#include <bits/stdc++.h>
using namespace std;

string postToInfix(string exp)
{
    // Write your code here
    stack<string> st;
    int n = exp.size();

    for (int i = 0; i < n; i++)
    {
        char c = exp[i];
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
            string con = "(" + t2 + c + t1 + ")";
            st.push(con);
        }
    }
    return st.top();
}