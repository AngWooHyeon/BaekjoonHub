#include <iostream>
using namespace std;

int main() {
    int H, M, S, N = 0;
    cin >> H >> M;
    S = H * 60 + M;   // 현재 시각을 분으로 변환

    cin >> N;
    S += N;           // 요리 시간 더하기

    if (S >= 1440) {   // 하루(1440분) 넘으면 하루치 빼기
        S -= 1440;
    }
    else if (S < 0) {  // 혹시 음수일 경우 하루 더하기 (안 쓰여도 안전용)
        S += 1440;
    }

    cout << S / 60 << " " << S % 60;
    return 0;
}
