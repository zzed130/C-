#include <iostream>

using namespace std;

int main() {

	int com, prin, Rout;
	int P;
	float A;


	cin >> com >> prin >> Rout;

	A = (com*2.5) + (prin * 2) + (Rout*0.5);

	P = int((A * 2) + 5) / 10) * 10; /// 5 ���� ó�� �̰� �ٷ� 1�� �ڸ��� ������ ���� �ڸ��� ����� ����̴�.


	cout << P << "Amperes";

	system("pause");
	return 0;


}