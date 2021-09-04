#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/158/B
// so f***ng weird and gredy

int main() {
    int n, x;
    vector<int> v(5, 0);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v[x] += 1;        
    }
    
    // of 4
    v[4] = v[4];
    
    // of 3
    v[3] = v[3];
    v[1] = v[1] - v[3];
    if (v[1] < 0) v[1] = 0;
    
    // of 2
    int rem2 = (2*v[2] % 4);
    v[2] = (2*v[2]) / 4;
    
    // of 1
    int rem1 = v[1] % 4;
    v[1] = v[1] / 4;
    
    // with 1 and 2 remainders
    int rem12 = (rem1+rem2) % 4;
    int aditional = (rem2+rem1) / 4;
    if (rem12) aditional += 1;
    
    int answer = v[4] + v[3] + v[2] + v[1] + aditional;
    
    cout << answer;
    
}
