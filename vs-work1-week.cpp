#include <iomanip>
#include <iostream>

using namespace std;


int main() {
	int timex1, timey1, timex2, timey2, temp1, temp2, temp, many, tempcopy;
	cout << "請輸入開始停車的時間(24小時):";
	cin >> timex1 >> timey1;
	cout << "請輸入離開停車的時間(24小時):";
	cin >> timex2 >> timey2;
	temp1 = timex1 * 60 + timey1;
	temp2 = timex2 * 60 + timey2;
	temp = temp2 - temp1;
	tempcopy = temp/30;
	switch (temp / 30) {
		
		case 1: case 2: case 3: case 4:
			many = 30 * tempcopy;
			cout << "你的停車費是: " << many << endl;
			break;
		case 5: case 6: case 7: case 8:
			many = 30 * 4 + 40 * (tempcopy-4) ;
			cout << "你的停車費是: " << many << endl;
			break;
		case 0: 
			many = 0;
			cout << "你的停車費是: " << many << endl;
			break;
		default:
			many = 30 * 4 + 40 * 4 + 60 * (tempcopy-8);
			cout << "你的停車費是: " << many << endl;
			break;
	}
}

