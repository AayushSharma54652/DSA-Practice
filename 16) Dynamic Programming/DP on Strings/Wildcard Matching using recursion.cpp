#include <bits/stdc++.h>
using namespace std;

bool f(int i, int j, string &s, string &p)
{
    if (i < 0 && j < 0)
        return true;
    if (i < 0 && j >= 0)
        return false;
    if (j < 0 && i >= 0)
    {
        for (int ii = 0; ii <= i; ii++)
        {
            if (s[ii] != '*')
                return false;
        }
        return true;
    }
    if (s[i] == p[j] || s[i] == '?')
        return f(i - 1, j - 1, s, p);

    if (s[i] == '*')
    {
        return f(i - 1, j, s, p) | f(i, j - 1, s, p);
    }
    return false;
}

bool isMatch(string p, string s)
{
    int n = s.size();
    int m = p.size();
    return f(n - 1, m - 1, s, p);
}