#include <iostream>
#include <math.h>


using namespace std;


int main() {
	int n, B;

	cin >> n;

	B = int(log2(n + 1)) + 1; //���� �߸�����.

	cout << B;
	system("pause");
}