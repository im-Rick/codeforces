#include <bits/stdc++.h>
using namespace std;

string test(string s) {
    string helper = "hello";
    int index = 0;
    for (auto c : s) {
        if (c == helper[index]) {
            index++;
        }
        if (index == 5) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    string s;
    
    cin >> s;
    cout << test(s);
    
    

}
