#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long arr[1000001];
long long *segTree;

int N, M, K, H;
long long a, b, c, big, small;



long long init(int nodeNum, int start, int end){
    if(start == end) return segTree[nodeNum] = arr[start];
    int mid = start + (end - start)/2;

    return segTree[nodeNum] = (init(2 * nodeNum, start, mid) * init(2 * nodeNum+1, mid+1, end)) % MOD;
}

long long multiply(int nodeNum, int start, int end, int left, int right){
    if(left > end || right < start) return 1;
    if(left <= start && end <= right) return segTree[nodeNum];

    int mid = start + (end - start)/2;

    return (multiply(nodeNum * 2, start, mid, left, right) * multiply(2 * nodeNum+1, mid+1, end, left, right)) % MOD;
}

long long update(int nodeNum, int start, int end, int targetIdx, long long val){
    if(targetIdx > end || targetIdx < start) return segTree[nodeNum];
    if(start == end) return segTree[nodeNum] = val;
    int mid = start + (end - start)/2;

    return segTree[nodeNum] = (update(2*nodeNum, start, mid, targetIdx, val)*update(2 * nodeNum+1, mid+1, end, targetIdx, val)) % MOD;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    
    cin>> N >> M >> K;

    H = ceil(log2(N));
    segTree = new long long[1<<(H + 1)];


    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    
    init(1, 0, N - 1);

    for(int i = 0; i < M + K; i++) {
        cin >> a >> b >> c;
        if(a == 1) {
            arr[b - 1]=c;
            update(1, 0, N - 1, b - 1, c);
        }
        else {

            big = b > c ? b : c;
            small = b > c ? c : b;

            cout << multiply(1, 0, N-1, small-1, big-1) << '\n';
        }
    }
    return 0;
}