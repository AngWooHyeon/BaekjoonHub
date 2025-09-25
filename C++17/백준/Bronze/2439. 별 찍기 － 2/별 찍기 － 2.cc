#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (j <= N - i) cout << " "; // 공백
            else cout << "*";            // 별
        }
        cout << "\n";
    }

    return 0;
}
