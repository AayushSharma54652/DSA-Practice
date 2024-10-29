#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    int cnt = 0;
    int a = n;

    while (n > 0) {
        int last = n % 10;
        n = n / 10;
        
        if (last != 0 && a % last == 0) {
            cnt = cnt + 1;
        }
    }

    cout << cnt;

}
