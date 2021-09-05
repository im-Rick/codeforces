#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/479/A

int main() {
    int x;
    vector<int> a;
    
    for (int i = 0; i < 3; i++) {
        cin >> x;
        a.push_back(x);
    }
    
    int ans = 0;
    ans = max(ans, (a[0] + a[1] + a[2]));
    ans = max(ans, a[0] * a[1] * a[2]);
    ans = max(ans, (a[0] + a[1]) * a[2]);
    ans = max(ans, a[0] * (a[1] + a[2]));
    ans = max(ans, a[0] * a[1] + a[2]);
    ans = max(ans, a[0] + a[1] * a[2]);
    
    cout << ans;
}
