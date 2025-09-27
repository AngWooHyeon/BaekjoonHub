#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> basket(N + 1, 0); 
    for(int z=1; z<=N; ++z){
        basket[z]=z;

    }
    for (int t = 0; t < M; ++t) {
        int i,j,x,y=0;
        cin >> i >> j;
        x= basket[i];
        y= basket[j];
        basket[i]=y;
        basket[j]=x;
        
    }

    for (int x = 1; x <= N; ++x) {
        if (x > 1) cout << ' ';
        cout << basket[x];
    }
    return 0;
}
