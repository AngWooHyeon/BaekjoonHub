#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int N;
    
        cin >> N;

        vector<int>arr(N);
        for(int i=0; i<N; i++){
            cin>> arr[i];
        }
        int smallest=arr[0];
        int largest=arr[0];

    
        for(int i=0;i<N;i++){
            if (arr[i] < smallest) {smallest=arr[i];}
        }

        for(int i=0;i<N;i++){
            if (arr[i] > largest) {largest=arr[i];}
        }

        cout<<smallest <<" "<<largest;


    }

