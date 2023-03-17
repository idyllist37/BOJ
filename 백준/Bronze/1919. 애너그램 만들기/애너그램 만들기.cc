#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  
    int a[26] = {};
    string s1, s2;
    int count = 0;
    cin >> s1 >> s2;

    for (auto c : s1) a[c-'a']++;
    for (auto c : s2) a[c-'a']--;

    for(int i : a) {
      if(i != 0) count += abs(i);
    }
    cout << count;
  
}