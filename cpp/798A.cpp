#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/798/A

int main() {
    string s, rev;
    int count = 0;
    
    cin >> s;
    int l = s.size();
    // it always round to the minimun 3.5 -> 3.0
    // if its even length the middle always count as 1
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - 1 - i]) {
            count += 1;
        }
    }
    
    if ((count == 0) & (l % 2 == 1)) {
        cout << "YES";
    } else if (count == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
