#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;


int main(){
	int x, y, z, temp;
	int radius = 200 / 2;
	//cout << "請輸入整數X:" ;
	cin >> x ;
	//cout << "請輸入整數Y:" ;
	cin >> y ;
	temp =sqrt( pow(x, 2) + pow(y, 2));
	if (temp > radius) {
		//cout <<"(x,y) = " << "(" << x << "," << y << ")" << "outside" << endl;
		cout << "outside" << endl;
	}else{
		//cout <<"(x,y) = " << "(" << x << "," << y << ")" << "inside" << endl;
		cout << "inside" << endl;
	}
}

