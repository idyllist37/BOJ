#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int asc = 0, des = 0;
    int a[8];
    for(int i = 0; i < 8; i++) {
        cin >> a[i];

        if(a[i] == i + 1) asc++;
        else if(a[i] == 8 - i) des++;

    }

    if(asc == 8) cout << "ascending";
    else if(des == 8) cout << "descending";
    else cout << "mixed";
 
    return 0;
}