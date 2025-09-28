#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N=0;
    int count=0; //다른 나머지를 세어주는 것 
    int found; //다른 나머지를 찾는것 /찾으면1 아니면 0

    vector<int> Number(10, 0); 
    for(int z=0; z<10; ++z){
        cin >> N;
        Number[z]= N % 42;
    }

    for(int i=0; i<10; ++i){
        found=0; //i때마다 초기화
        for(int j=0;j<i;++j){
            if(Number[i]==Number[j]){
                found=1;//다른 나머지를 찾으면 1
                break;
            }
        }
        if (found==0) {
            count++;}
    }

    cout << count << '\n';
    return 0;
}
