#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int pos[26];

    // 1️⃣ 전부 -1로 초기화
    for (int i = 0; i < 26; i++) {
        pos[i] = -1;
    }

    // 2️⃣ 문자열 검사
    for (int i = 0; i < s.length(); i++) {
        int idx = s[i] - 'a';  // 알파벳 → 0~25

        if (pos[idx] == -1) { // 처음 나왔을 때만
            pos[idx] = i;
        }
    }

    // 3️⃣ 출력
    for (int i = 0; i < 26; i++) {
        cout << pos[i] << " ";
    }

    return 0;
}
