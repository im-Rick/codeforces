#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/492/B

int main() {
    int n, l, x;
    vector<int> l_pos;
    
    cin >> n >> l;
    for (int i = 0; i < n; i++) {
        cin >> x;
        l_pos.push_back(x);
    }
    
    sort(l_pos.begin(), l_pos.end());
    // 0 3 5 7 9 14 15 [0-15]
    // 2 5
    
    // create a vector of distances
    // insert d for the begin and end
    vector<long double> dist;
    dist.push_back(*l_pos.begin() - 0);
    for (auto it = l_pos.begin(); it != l_pos.end() - 1; it++) {
        long  double help =  *(it + 1) - *it;
        help = help / 2;
        dist.push_back(help);
        // 0 3 2 2 2 5 1 0
    }
    dist.push_back(l - *(l_pos.end()-1));
    
    cout << fixed << (*max_element(dist.begin(), dist.end()));
    
}
