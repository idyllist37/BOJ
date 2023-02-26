#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, ans;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> a >> b;
        ans = 1;
        for(int j = 0; j < b; j++) {
            ans = (ans * a) % 10;
        }
        if(ans == 0) {
            ans = 10;
        }
        cout << ans << "\n";
    }
}

