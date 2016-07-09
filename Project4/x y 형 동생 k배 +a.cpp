#include <iostream>
#include<math.h>

using namespace std;


int main() {

	int y1, y2, x1, x2;
	int k, a;
	cin >> x1 >> y1 >> x2 >> y2;

	k = (y2 - y1) / (x2 - x1);

	a = y1 - ((y2 - 1) / (x2 - x1)*x1);
	cout << k << a;
	system("pause");

}