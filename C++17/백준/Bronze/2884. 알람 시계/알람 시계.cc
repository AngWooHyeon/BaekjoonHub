#include <iostream>
using namespace std;

int main() {
    int H, M, S = 0;
    cin >> H >> M;

    // 현재 시간을 총 분으로 변환
    S = H * 60 + M;

    // 45분 빼기
    S -= 45;

    // 하루(1440분) 기준으로 보정
    if (S < 0) {
        S += 1440;  // 음수가 되면 하루를 더해줌
    }

    cout << S / 60 << " " << S % 60;
    return 0;
}
