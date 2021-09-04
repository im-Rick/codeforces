#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1490/D

// Its not a optimal solution, we could have storage the
// level at the time of insertion

struct TreeNode {
    int x;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int _x) : x(_x), left(nullptr), right(nullptr) {}
};

// Binary Tree
struct BT {
    TreeNode* _root;
    size_t _size;
    
    BT() : _root(nullptr), _size(0) {}
    
    private:
        TreeNode* insert(TreeNode* root, vector<int> perm, int l , int r) {
            // only one element left
            if (l == r) return nullptr;
            
            int idx = find_max(perm, l, r);
            root = new TreeNode(perm[idx]);
            
            root->left = insert(root, perm, l, idx);
            root->right = insert(root, perm, idx + 1, r);
            
            /*
            if ((idx - l) >= 1) {
                root->left = insert(root, perm, l, idx);
            }
            if ((r - idx) > 1) {
                root->right = insert(root, perm, idx + 1, r);
            }
            */ 
            
            return root;
        }
        
        void pre_order(TreeNode* root) {
            if (root == nullptr) return;
            // print its value
            cout << root->x << " ";
            pre_order(root->left);
            pre_order(root->right);
        }
        
        // print by level order
        vector<pair<int, int>> bft(TreeNode* root) {
            queue<TreeNode*> m_queue;
            TreeNode* helper = nullptr;
            
            m_queue.push(root);
            
            int lv = 0;
            queue<int> level;
            level.push(lv);
            
            vector<pair<int, int>> num_and_levels;
            
            
            while(!m_queue.empty()) {
                helper = m_queue.front();
                m_queue.pop();
                //cout << helper->x << " ";
                
                lv = level.front();
                //cout << "l:" << lv << " ";
                level.pop();
                
                pair<int, int> a(helper->x, lv);
                num_and_levels.push_back(a);
                
                if (helper->left) {
                    m_queue.push(helper->left);
                    level.push(lv+1);
                }
                if (helper->right) {
                    m_queue.push(helper->right);
                    level.push(lv+1);
                }
            }
            
            // value, level
            return num_and_levels;
        }
        
        
        
    public:
        void insert(vector<int> perm, int l, int r) {
            _root = insert(_root, perm, l, r);
        }
        
        void pre_order() {
            pre_order(_root);
        }
        
        int find_max(vector<int> v, int l, int r) {
            int idx = 0;
            int c_max = 0;
            for (int i = l; i < r; i++) {
                if (v[i] > c_max) {
                    c_max = v[i];
                    idx = i;
                }
            }
            return idx;
        }
        
        void set_order(vector<int> v, int l, int r) {
            if (l == r) return;
            
            int idx = find_max(v, l, r);
            cout << v[idx] << " ";
            
            //if ((idx - l) >= 1) {
                set_order(v, l, idx);
            //}
            //if ((r - idx) > 1) {
                // important!, we already use
                // the idx so add one to avoid a bucle
                set_order(v, idx + 1, r);
            //}
        }
        
        vector<pair<int, int>> bft() {
            return bft(_root);
        }
        
        
        
        
};

int main() {

    int t, n, x;
    
    
    //vector<int> perm{3, 5, 2, 1, 4};
    //vector<int> perm{1, 3, 2, 7, 5, 6, 4};
    /*
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        perm.push_back(x);
    }
    */ 
    cin >> t;
    while(t--) {
        vector<int> perm;
        
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            perm.push_back(x);
        }
        
        BT* bt = new BT();
        //bt->insert(perm, 0, perm.size());
        bt->insert(perm, 0, perm.size());
        
        
        vector<pair<int, int>> levels = bt->bft();
        
        for (auto num : perm) {
            for (auto level : levels) {
                if (num == level.first) {
                    cout << level.second << " ";
                    break;
                }
            }
        }
        
    }
    
}
