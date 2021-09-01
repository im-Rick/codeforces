#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    
    cin >> s;
    // if we want to modify its value
    for (auto it = s.begin(); it != s.end(); it++) {
        *it = ::tolower(*it);
    }
    // otherwise, it creates a copy? 
    // for (auto c : s) {}
    
    // erase the vowels
    vector<char> vowels =  {'a','o','y','e','u','i'};
    // important <, beacause we are deleting the elements
    // if we use != al the moment we delete the end() 
    // there is no more element to compare,  although we could 
    // just simply create the result from here
    for (auto it = s.begin(); it < s.end(); it++) {
        for (auto vowel : vowels) {
            if (vowel == *it) {
                s.erase(it);
                // we need to reduce the it because
                // we are reducing the lengt of s
                // just dont use erase lol
                it--;
                break;
            }
        }
    }
    
    // insert dots before
    vector<char> dots (s.length(), '.');
    // merge both
    string result = "";
    for (int i = 0; i < (int) s.length(); i++) {
        // insert -> char
        // append -> string
        // result.append(".");
        result.insert(result.end(), dots[i]);
        result.insert(result.end(), s[i]);
        
    }
    
    cout << result << "\n"; 
       
}
