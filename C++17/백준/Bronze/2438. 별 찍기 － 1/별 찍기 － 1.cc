#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)  // i번 반복
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
