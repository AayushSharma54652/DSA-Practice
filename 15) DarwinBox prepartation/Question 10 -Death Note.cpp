#include <bits/stdc++.h>
using namespace std;
int ans;
string s;
void func(int i, int n)
{
    if (i == n - 1 || i == n)
    {
        ans++;
        return;
    }
    if (s[i] == '1')
    {
        func(i + 2, n);
    }
    else if (s[i] == '2' && s[i + 1] < '7')
    {
        func(i + 2, n);
    }
    func(i + 1, n);
}


int main()
{
    cin>>s;
    func(0,s.length());
    cout<<ans;
}           