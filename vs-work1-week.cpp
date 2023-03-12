#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double mi;
    cout << "請輸入你要轉換的英里數:";
    cin >> mi;
    cout << "英里是:" << mi << endl;
    mi *= 1.6;
    cout << "公里是:" << fixed << setprecision(1) << mi << endl;
}
