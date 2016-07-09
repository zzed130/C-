#include <stdio.h>
int NoOfDivisor(int);

int main()
{
	int i;
	for (i = 1; i <= 20; i++)
		printf("%d의 약수의 개수 = %d\n", i, NoOfDivisor(i));
}


int NoOfDivisor(int n)

{

	int count = 0, i;
	for (i = 1; i <= n / 2; i++)
		if (n%i == 0)
			count++;
	count++;
	return count;
	system("pause");

}





