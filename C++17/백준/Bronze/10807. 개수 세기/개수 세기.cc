#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int N,v;
        cin >> N;

        vector<int>arr(N);
        for(int i=0; i<N; i++){
            cin>> arr[i];
        }

        cin >> v;

        int count=0;
        for(int i=0;i<N;i++){
            if (arr[i]==v) count++;
        }

        cout<<count;


    }

