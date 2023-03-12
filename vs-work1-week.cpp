#include <iomanip>
#include <iostream>

using namespace std;
int radius = 200/2;

int main(){
	int x, y, z, temp;
	cout << "請輸入整數X:" ;
	cin >> x ;
	cout << "請輸入整數Y:" ;
	cin >> y ;
	temp = pow(x, 2) + pow(y, 2);
	z = pow(temp, 0.5);
	if (temp < radius) {
		cout <<"(x,y) = " << "(" << x << "," << y << ")" << "inside" << endl;
	}else{
		cout <<"(x,y) = " << "(" << x << "," << y << ")" << "outside" << endl;
	}
}

