#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, count = 0;
    string st;
    cin >> n;
    cin >> st;
    for(int i = 0; i < n; i++) {
        if(i < n - i - 1) {
            if(st[i] != st[n-i-1]) {
                count += 1;

            }
            
        
            
        }
    }
    cout << count;
}
