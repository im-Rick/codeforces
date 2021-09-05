#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/25/A

int main() {
    int n, x;
    vector<int> vi;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        vi.push_back(x);
    }
    
    vector<int> even(2, 0);
    int last_ev, last_odd;
    
    for (int i = 0; i < vi.size(); i++) {
        if (vi[i]%2 == 0) {
            even[0] += 1;
            last_ev = i + 1;
        } else {
            even[1] += 1;
            last_odd = i + 1;
        }
    }
    
    if (even[0] > even[1]) {
        cout << last_odd;
    } else {
        cout << last_ev;
    }
    
}
