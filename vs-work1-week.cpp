#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int n;
    //cout << "請輸入一個整數 (-128 ~ 127): ";
    cin >> n;
    cout  << bitset<8>(n) << endl;
    return 0;
}