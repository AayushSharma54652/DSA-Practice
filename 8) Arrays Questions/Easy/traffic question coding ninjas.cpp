#include<bits/stdc++.h>
using namespace std;

int traffic(int n, int m, vector<int> vehicle) {
    int cnt = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        if (m > 0 && vehicle[i] == 0) {
            vehicle[i] = 1;
            m--;
        }
    }

    for (int i = 0; i < n; i++) {
        if (vehicle[i] == 1) {
            cnt++;
            maxi = max(cnt, maxi);
        } else {
            cnt = 0;
        }
    }

    return maxi;
}

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> vehicle(n);
    for (int i = 0; i < n; i++) {
        cin >> vehicle[i];
    }

    cout << traffic(n, m, vehicle);
    return 0;
}
