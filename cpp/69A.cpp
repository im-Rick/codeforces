#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/69/A

int main() {
    int n, x, y, z;
    int sx = 0;
    int sy = 0;
    int sz = 0;
    
    cin >> n;
    
    while(n--) {
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }
    
    if (sx || sy || sz) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    
}
