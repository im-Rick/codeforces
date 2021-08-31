#include <bits/stdc++.h>
using namespace std;

// codeforces.com/problemset/problem/1509/B

int main() {
	int t;
    int n;
    string s;
    
    cin >> t;
    
    while (t--) {
        stack<char> T;
        // number of consecutive T should be less equal than n/3
        int count_of_T = 0;
        int TM_count = 0;
        string valid = "YES";
        
        cin >> n;
        cin >> s;
        
        
        for (auto it : s) {
            if (it == 'M' && T.empty()) {
                valid = "NO";
                break;
            }
            if (it == 'T') {
                T.push('T');
                count_of_T++;
            }
            if (it == 'M' && !T.empty()) {
                T.pop();
                count_of_T--;
                TM_count++;
            }
            
            if (count_of_T > n/3) {
                valid = "NO";
                break;
            }
        }
        if (TM_count != n/3) {
            valid = "NO";
        }
        
        cout << valid << "\n";
    }
    
    

}
