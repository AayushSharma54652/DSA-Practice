#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence)
{
    vector<bool> ans(26, 0);
    for (int i = 0; i < sentence.size(); i++)
    {
        ans[sentence[i] - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (ans[i] == 0)
            return 0;
    }
    return 1;
}