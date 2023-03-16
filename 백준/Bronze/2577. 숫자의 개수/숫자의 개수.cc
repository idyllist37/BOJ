#include <bits/stdc++.h>
using namespace std;



int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int a, b, c;
  int count[10] = {};
  
  cin >> a >> b >> c;
  int res = a * b * c;

  string s = to_string(res);

  for(char ch : s) {
    count[ch - '0']++;
  }
  for(int i : count) cout << i << "\n";

  
}