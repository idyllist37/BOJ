#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
 
    int t, r;
    string s;
    

    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> r >> s;
        for(int j = 0; j < s.size(); ++j) {
            for(int k = 0; k < r; ++k) {
                cout << s[j];
            }
        }
        cout << '\n';
    }
    
    return 0;
}