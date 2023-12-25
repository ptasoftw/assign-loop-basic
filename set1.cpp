/*
S1: Nhập 1 số nguyên dương n. In ra màn hình giá trị của S = 1 + 2 + 3 + ... + n.
Input     Output
4         10
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    
    return 0;
}