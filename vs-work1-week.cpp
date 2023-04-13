#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int mi;
    double km;
    cout << "輸入欲轉換之英哩數:";
    cin >> mi;
    cout << "英里是:" << mi << endl;
    km = mi* 1.6;
    cout     << "公里是:" << fixed << setprecision(1) << km << endl;
}
