#include <iostream>
using namespace std;

int main()
{
    int N,K = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        K=K+i;
    }
    cout << K;

    return 0;
}
