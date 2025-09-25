#include <iostream>
using namespace std;

int main()
{
    int X,N,a,b= 0;
    cin >> X;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> a >> b;

        X= X-a*b;
    }
    
    if(X==0){
        cout << "Yes";
    }
    
    else{
        cout << "No";
    }
    

    return 0;
}
