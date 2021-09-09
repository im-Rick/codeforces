#include <bits/stdc++.h>
using namespace std;

int bills(int rem, int i) {
    vector<int> denom = {100, 20, 10, 5, 1};
    int total = 0;
    
    if (rem == 0) {
        return 0;
    } else {
        total = (rem / denom[i]) + bills(rem - ((rem / denom[i]) * denom[i]) , i + 1); 
    }
        
    
    
    
    return total;
}

int main() {
    long long n;
    
    cin >> n;
    int min = bills(n, 0);
    cout << min;
}
