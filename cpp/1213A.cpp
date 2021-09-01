#include <bits/stdc++.h>
using namespace std;

int get_cost(int selected, vector<int> chips) {
    int cost = 0;
    for (auto num : chips) {
        cost += (abs(selected - num) % 2);
    }
    
    return cost;
}

int main() {
    int n, x;
    vector<int> chips;
    vector<int> cost;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        chips.push_back(x);
    }
    
    for (size_t i = 0; i < chips.size(); i++) {
        cost.push_back(get_cost(chips[i], chips));
    }
    
    cout << *min_element(cost.begin(), cost.end());
}
