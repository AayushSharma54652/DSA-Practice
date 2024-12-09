#include <bits/stdc++.h>
using namespace std;

string preToInfix(string pre_exp)
{
    int n = pre_exp.size();
    // Write your code here
    stack<string> st;

    for (int i = n - 1; i >= 0; i--)
    {
        char c = pre_exp[i];

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
            string con = "(" + t1 + c + t2 + ")";
            st.push(con);
        }
    }
    return st.top();
}