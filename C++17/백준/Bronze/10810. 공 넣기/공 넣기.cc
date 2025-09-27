#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> basket(N + 1, 0); 
    for (int t = 0; t < M; ++t) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int b = i; b <= j; ++b) {
            basket[b] = k;  
        }
    }

    for (int x = 1; x <= N; ++x) {
        if (x > 1) cout << ' ';
        cout << basket[x];
    }
    return 0;
}
