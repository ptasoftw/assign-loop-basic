/*
S3: Nhập 1 số nguyên dương n. In ra màn hình giai thừa n!.
Input     Output
3         6
5         120
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    unsigned long long factorial = 1;
    for(int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << factorial << endl;

    return 0;
}
