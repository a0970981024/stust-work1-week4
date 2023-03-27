#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
char Card[5][10][6] = {
        {"*****", "    *", "*****", "*****", "*   *", "*****", "*****", "*****", "*****", "*****"},
        {"*   *", "    *", "    *", "    *", "*   *", "*    ", "*    ", "    *", "*   *", "*   *"},
        {"*   *", "    *", "*****", "*****", "*****", "*****", "*****", "    *", "*****", "*****"},
        {"*   *", "    *", "*    ", "    *", "    *", "    *", "*   *", "    *", "*   *", "    *"},
        {"*****", "    *", "*****", "*****", "    *", "*****", "*****", "    *", "*****", "    *"},
};
int main() {
    string stile;
    int x = 1, temp[10]={0};
    char ctile[10]={0};
    cout << "請輸入整數:";
    cin >> stile;

    
     for (int i = 0; i < size(stile); i++) {
        ctile[i] = stile[i];
        temp[i] =ctile[i]-'0';
     }
    

     

     for (int i = 0; i < 5; i++) {
         for (int j = 0; j < size(stile); j++) {
             cout << Card[i][temp[j]];
             cout << " ";
         }
        cout << '\n';
    }
}