#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, string &s1, string &s2)
{
    if (i < 0)
        return j + 1;
    if (j < 0)
        return i + 1;
    if (s1[i] == s2[j])
        return f(i - 1, j - 1, s1, s2);
    return 1 + min(f(i - 1, j, s1, s2),           // deletion operation
                   min(f(i, j - 1, s1, s2),       // insertion operation
                       f(i - 1, j - 1, s1, s2))); // replacement operation
}

int minDistance(string word1, string word2)
{
    int n = word1.size();
    int m = word2.size();

    return f(n - 1, m - 1, word1, word2);
}