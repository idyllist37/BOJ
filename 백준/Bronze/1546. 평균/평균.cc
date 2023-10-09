#include <bits/stdc++.h>

using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    fast_io();

    int n;
    double max, sum = 0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    max = *max_element(a, a + n);
    
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum / max * 100 / n;
    
}