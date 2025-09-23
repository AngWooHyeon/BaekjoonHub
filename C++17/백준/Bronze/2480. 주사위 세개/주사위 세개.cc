#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int prize = 0;

    if (a == b && b == c) {
        // 같은 눈 3개
        prize = 10000 + a * 1000;
    }
    else if (a == b || a == c) {
        // 같은 눈 2개 (a와 b, 또는 a와 c)
        prize = 1000 + a * 100;
    }
    else if (b == c) {
        // 같은 눈 2개 (b와 c)
        prize = 1000 + b * 100;
    }
    else {
        // 모두 다른 눈 → 가장 큰 값 × 100
        int maxVal = a;
        if (b > maxVal) maxVal = b;
        if (c > maxVal) maxVal = c;
        prize = maxVal * 100;
    }

    cout << prize;
    return 0;
}
