# include<bits/stdc++.h>
using namespace std;

int mod = 1000000007;
long long f(int i, int j, int isTrue, string &exp) {
    if (i > j) return 0;

    if (i == j) {
        if (isTrue) {
            return exp[i] == 'T';
        } else {
            return exp[i] == 'F';
        }
    }

    long long ways = 0;

    for (int ind = i + 1; ind <= j - 1; ind += 2) {
        long long lT = f(i, ind - 1, 1, exp);
        long long lF = f(i, ind - 1, 0, exp);
        long long rT = f(ind + 1, j, 1, exp);
        long long rF = f(ind + 1, j, 0, exp);

        if (exp[ind] == '&') {
            if (isTrue) {
                ways = (ways + (rT * lT) % mod) % mod;
            } else {
                ways = (ways + (rT * lF) % mod + (rF * lT) % mod + (rF * lF) % mod) % mod;
            }
        } else if (exp[ind] == '|') {
            if (isTrue) {
                ways = (ways + (lT * rT) % mod + (lF * rT) % mod + (lT * rF) % mod) % mod;
            } else {
                ways = (ways + (rF * lF) % mod) % mod;
            }
        } else { // XOR (^)
            if (isTrue) {
                ways = (ways + (lT * rF) % mod + (lF * rT) % mod) % mod;
            } else {
                ways = (ways + (lT * rT) % mod + (lF * rF) % mod) % mod;
            }
        }
    }

    return ways;
}

int evaluateExp(string & exp) {
    int n = exp.size();
    return f(0, n - 1, 1,exp);
}