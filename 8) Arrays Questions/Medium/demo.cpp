#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> construct_lexicographically_maximum_array(vector<int>& a) {
    int n = a.size();
    vector<int> b;

    for (int i = n - 1; i >= 0; --i) {
        int k = 1;
        while (k <= a.size() && k == a[k - 1]) {
            k++;
        }

        if (k > a.size()) {
            b.push_back(0);
        } else {
            b.push_back(a[k - 1]);
            a.erase(a.begin() + k - 1);
        }
    }

    reverse(b.begin(), b.end());
    return b;
}
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> result = construct_lexicographically_maximum_array(a);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
