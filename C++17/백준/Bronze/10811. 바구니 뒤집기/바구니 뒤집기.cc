#include<iostream>
#include<vector>
using namespace std;

int main(){
    int M,N,R,i,j=0;

    cin>>N>>M;
    vector<int>Number(N,0);

    for(int x=0; x<N;++x){
        Number[x]=x+1;
    }

    for (int y=0; y<M; ++y){
        cin>>i>>j;
        for(int z=0; z<(j-i+1)/2;++z){
            int Start= (i-1)+z; //가장 왼쪽 인덱스
            int End=(j-1)-z;//가장 오른쪽 인덱스
            R=Number[Start];
            Number[Start]=Number[End];
            Number[End]=R;
        }
    } 

    for (int x = 0; x < N; ++x) {
            if (x) cout << ' ';
            cout << Number[x];
        }
    cout << '\n';
    return 0;
}
