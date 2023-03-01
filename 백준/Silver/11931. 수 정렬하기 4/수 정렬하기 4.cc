#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    int temp, n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), greater<>());
    for(int i = 0; i < n; i++) {
        cout << v[i] <<"\n";
    }
    
}