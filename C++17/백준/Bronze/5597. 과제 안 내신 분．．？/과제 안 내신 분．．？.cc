#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M=0;

    vector<int> student(30, 0); 
    for(int z=1; z<=28; ++z){
        cin >> N;
        student[N-1]=N;
    }

    for (int x = 1; x <= 30; ++x) {
        if (student[x-1]== 0){
            M=x;
            cout<<M<<endl;
        }
    }
    return 0;
}
