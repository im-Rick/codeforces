#include <bits/stdc++.h>
using namespace std;

// codeforces.com/problemset/problem/1328/A

int main() {
	int t, a, b, ans;
    
    cin >> t;
    
    while(t--) {
        cin >> a >> b;
        
        if (a%b == 0) {
            cout << 0 << "\n";
        } else {            
            ans = (b-(a % b));
            cout << ans << "\n";
        }
    }
}
