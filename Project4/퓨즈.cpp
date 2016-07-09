#include <iostream>

using namespace std;

int main() {

	int com, prin, Rout;
	int P;
	float A;


	cin >> com >> prin >> Rout;

	A = (com*2.5) + (prin * 2) + (Rout*0.5);

	P = int((A * 2) + 5) / 10) * 10; /// 5 버림 처리 이게 바로 1의 자리는 버리고 십의 자리만 남기는 비법이다.


	cout << P << "Amperes";

	system("pause");
	return 0;


}