#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string s;
    cin >> N;
    cin >> s;

    int sum = 0;

    // 문자열 s를 한 글자씩 꺼냄

    // 예: "54321" → '5', '4', '3', '2', '1'
    for (char c : s) {
        sum += c - '0';
    }

    cout << sum;
    return 0;
}
