#pragma GCC optimize ("O3")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

bool ans[1001];
int n, num, strike, ball;
int strike_cnt = 0, ball_cnt = 0, cnt = 0;
string compare1, compare2;

void fast_io() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    fast_io();
    memset(ans, 1, sizeof(ans));

    for(int i = 123; i <= 987; i++) {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        if(a == b || b == c || c == a) {
            ans[i] = 0;
            continue;
        }
        if(a == 0 || b == 0 || c == 0) {
            ans[i] = 0;
            continue;
        }
    }
    
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num >> strike >> ball;

        for(int j = 123; j <= 987; j++) {
            strike_cnt = 0;
            ball_cnt = 0;

            if(!ans[j]) continue;

            if(ans[j]) {
                compare1 = to_string(j);
                compare2 = to_string(num);

                for(int a = 0; a < 3; a++) {
                    for(int b = 0; b < 3; b++) {
                        if(a == b && compare1[a] == compare2[b]) strike_cnt++;
                        if(a != b && compare1[a] == compare2[b]) ball_cnt++;
                    }
                }

                if(strike_cnt != strike || ball_cnt != ball) ans[j] = 0;

            }

        }
    }

    for(int i = 123; i <= 987; i++) {
        if(ans[i]) cnt++;
    }

    cout << cnt;

    
}