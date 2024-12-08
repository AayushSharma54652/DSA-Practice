#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c == '^')return 3;
    else if(c == '*' || c == '/')return 2;
    else if(c == '+' || c == '-')return 1;
    return -1;
}

string infixTOPrefix(string s){
    int n = s.length();
    reverse(s.begin(), s.end());

    for(int i=0;i<n;i++){
        if(s[i] == '(')s[i] = ')';
        else if(s[i] == ')')s[i] = '(';
    }

    stack<char>st;
    string result;
    for(int i=0;i<n;i++){
        char c = s[i];
        if((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z') || (c >= '1' && c <= '9')){
            result += c;
        }

        else if( c == '(')st.push('(');
        
        else if(c == ')'){
            while(!st.empty() && st.top() != '('){
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        else{
            while(!st.empty() && prec(c) < prec(st.top())){
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        result += st.top();
        st.pop();
    }

    reverse(result.begin(),result.end());

    return result;
}