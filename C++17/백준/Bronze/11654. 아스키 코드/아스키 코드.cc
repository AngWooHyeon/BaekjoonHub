#include <iostream>
using namespace std;
// C++에서 char는 정수형처럼 취급할 수 있음
// char를 int로 출력하면 자동으로 아스키 코드 값이 나옴
int main() {
    char c;
    cin >> c;
    cout << (int)c;
    return 0;
}
