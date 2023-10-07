#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
 
    int a[10];

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        a[i] %= 42;
    }


    sort(a, a + 10);

    int cnt = 1;

    for (int i = 0; i < 9; i++) {
        if (a[i] != a[i + 1]) {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}