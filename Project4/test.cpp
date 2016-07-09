#include <iostream>
#include <math.h>


using namespace std;

int main() {


	int a, b, c;
	

	

	cin >> a >> b >> c;
	








	if (a*a + b*b == c*c) {

		cout << "right";
	}
	else if (a*a + b*b > c*c) {

		cout << "acute";
	}

	else if (a*a + b*b < c*c) {

		cout << "obtuse";

	}

}