#include <iostream>
#include <math.h>


using namespace std;


int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	float x = a / b;
	float y = c / d;

	if (x > y) cout << "1";
	else if (x = y) cout << "0";
	else cout << "-1";

	system("pause");



}

// 1 입력처리 (변수처리, 입력 갯수 데이터형,변수명)
// 2 계산
// 3 출력처리 (처리,갯수,형태,표시)
