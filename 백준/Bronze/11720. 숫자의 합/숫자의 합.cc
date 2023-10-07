#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
 
    int t, sum = 0;
    string s;

    cin >> t;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
    sum += s[i] - '0';
    }
    cout << sum << "\n"; 
    return 0;
}