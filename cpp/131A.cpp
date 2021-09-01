#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/131/A

int main() {
    string s;
    string case1, case2, case3, case4;;
    
    cin >> s;
    for (auto it = s.begin(); it < s.end(); it++) {
        case1 += (::toupper(*it));
        case4 += ::tolower(*it);
        if (it == s.begin()) {
            case2 += ::tolower(*it);
            case3 += ::toupper(*it);
        } else {
            case2 += ::toupper(*it);
            case3 += ::tolower(*it);
        }
    }
    
    if (s == case2) {
        cout << case3;
    } else if (s == case1) {
        cout << case4;;
    } else {
        cout << s;
    }
    
}
