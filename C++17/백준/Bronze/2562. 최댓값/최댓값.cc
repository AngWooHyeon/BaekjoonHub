#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int N=0;
    
        vector<int>arr(9);
        for(int i=0; i<9; i++){
            cin>> arr[i];
        }

        int largest=arr[0];

        for(int i=0;i<9;i++){
            if (arr[i] > largest)
            {
                largest=arr[i];
                N=i;
            }
        }

        cout<<largest<<'\n';

        cout<<N+1;

        return 0;
    }

