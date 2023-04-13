#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int mi;
    double km;
    cin >> mi;

    km = mi* 1.6;
    cout<< fixed << setprecision(1) << km << endl;
    return 0;
}
