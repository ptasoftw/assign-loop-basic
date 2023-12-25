/*
S2: Nhập 1 số nguyên dương n. In ra màn hình giá trị của S = 1^2 + 2^2 + 3^2 + ... + n^2.
Input     Output
4         30
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i*i;
    }
    cout << sum << endl;

    return 0;
}