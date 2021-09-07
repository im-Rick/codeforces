#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/855/A

int main() {
    set<string> names;
    int n;
    string s;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        
        if (names.find(s) != names.end()) {
            cout << "YES\n";
        } else {
            names.insert(s);
            cout << "NO\n";
        }
    }
}
