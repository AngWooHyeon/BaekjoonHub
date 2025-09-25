#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    while (true) {
        cin >> A >> B;
        if (A == 0 && B == 0) break;  // 0 0 들어오면 종료
        cout << A + B << "\n";
    }
    return 0;
}
