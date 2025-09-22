#include <iostream>
using namespace std;

int main()
{
    int Date = 0;
    cin >> Date;

    if (Date%4 == 0 && Date%100 != 0 || Date%400 == 0) 
    {
        cout << "1";
    }

    else {
        cout << "0";
    }

}
