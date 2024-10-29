#include <bits/stdc++.h>
using namespace std;

int lps(string s)
{
    vector<int> lps(s.size(), 0);
    int pre = 0;
    int suf = 1;
    while (suf < s.size())
    {
        // Matching prefix and suffix
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            suf++;
            pre++;
        }

        // Not Matching
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
    return lps[s.size() - 1];
}