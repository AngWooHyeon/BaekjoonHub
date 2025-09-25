#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    while (cin >> A >> B) {   // 입력이 있을 때만 반복
        cout << A + B << "\n";
    }
    return 0;
}
