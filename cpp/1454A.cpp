#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1454/A

int main() {
    int t, n;
    
    cin >> t;
    while(t--) {
        cin >> n;
        if (n > 1) {
            cout << n << " ";
            for (int i = 1; i < n; i++) {
                cout << i << " ";
            }
        }
    }
}
