#pragma GCC optimize ("O3")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")
#include <bits/stdc++.h>

using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    fast_io();

    string s;
    int t, cnt = 0, ans = 0;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> s;
        for(int j = 0; j < s.size(); j++) {
            if(s[j] == 'O') {
                cnt += 1;
                for(int k = j - 1; k >= 0; k--) {
                    if(s[k] == 'O') {
                        cnt += 1;
                    }
                    else {
                        break;
                    }
                    
                }
                ans += cnt;
                cnt = 0;
            }
        }
        cout << ans << "\n";
        ans = 0;
        cnt = 0;
    }    
}