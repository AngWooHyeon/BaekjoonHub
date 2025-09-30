#include<iostream>
#include<vector>
#include <iomanip>

using namespace std;

int main(){
    int N;                 // 과목 수는 정수
    double M = 0, L = 0;   // M: 입력받는 점수(임시), L: 최댓값
    double k = 0;          // 새 점수들의 합(평균 계산용)
    
    cin>>N;
    vector<int>Number(N,0);

    for(int x=0; x<N;++x){
        cin>>M;
        Number[x]=(int)M;

        if (Number[x]>L){
            L=Number[x];
        }  
    }

    for(int x=0; x<N; ++x){
        k+=Number[x]/L*100;
    }

    k=k/N; //평균
    cout << fixed << setprecision(6) << k << '\n';
   
    return 0;
}
