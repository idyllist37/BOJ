#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
 
    int a, b, c, h;

    cin >> a >> b >> c;
    h = c;
    h /= 60;
    c %= 60;

    if (b + c >= 60) {
        b = (b + c) % 60;
        a++;
    } else {
        b += c;
    }

    if(a + h >= 24) {
        a = (a + h) % 24;
    } else {
        a += h;
    }
 
    cout << a << " " << b << "\n";

    return 0;
}